<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function oa_bookmark_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bookmarks';
  $context->description = 'Bookmarks view & bookmarklet block';
  $context->tag = 'Bookmarks';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'bookmarks' => 'bookmarks',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'oa_bookmark-0' => array(
          'module' => 'oa_bookmark',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bookmarks');
  t('Bookmarks view & bookmarklet block');

  $export['bookmarks'] = $context;
  return $export;
}
