<?php
/**
 * @file
 * cc_publication.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cc_publication_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|publication|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'links' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|publication|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cc_publication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'field_pub_image',
      ),
      'right' => array(
        0 => 'field_pub_author',
        1 => 'field_pub_genre',
        2 => 'body',
      ),
      'footer' => array(
        0 => 'comments',
        1 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_pub_image' => 'left',
      'field_pub_author' => 'right',
      'field_pub_genre' => 'right',
      'body' => 'right',
      'comments' => 'footer',
      'links' => 'footer',
    ),
  );
  $export['node|publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_pub_image',
      ),
      'right' => array(
        2 => 'field_pub_author',
        3 => 'field_pub_genre',
        4 => 'body',
      ),
      'footer' => array(
        5 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_pub_image' => 'left',
      'field_pub_author' => 'right',
      'field_pub_genre' => 'right',
      'body' => 'right',
      'links' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|publication|teaser'] = $ds_layout;

  return $export;
}
