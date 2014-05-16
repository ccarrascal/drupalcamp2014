<?php
/**
 * @file
 * cc_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cc_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_list';
  $context->description = '';
  $context->tag = 'listados';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_listing' => 'news_listing',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_listing-block' => array(
          'module' => 'views',
          'delta' => 'news_listing-block',
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
  $export['news_list'] = $context;

  return $export;
}
