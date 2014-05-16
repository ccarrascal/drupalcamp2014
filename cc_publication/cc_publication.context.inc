<?php
/**
 * @file
 * cc_publication.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cc_publication_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publication_list';
  $context->description = '';
  $context->tag = 'listados';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'publication_list' => 'publication_list',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-publication_list-block' => array(
          'module' => 'views',
          'delta' => 'publication_list-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('listados');
  $export['publication_list'] = $context;

  return $export;
}
