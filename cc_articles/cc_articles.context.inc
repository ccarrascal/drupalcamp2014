<?php
/**
 * @file
 * cc_articles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cc_articles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'listado_articulos';
  $context->description = '';
  $context->tag = 'listados';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article_list' => 'article_list',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-article_listing-block' => array(
          'module' => 'views',
          'delta' => 'article_listing-block',
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
  $export['listado_articulos'] = $context;

  return $export;
}
