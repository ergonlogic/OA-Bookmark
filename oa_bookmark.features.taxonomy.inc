<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function oa_bookmark_taxonomy_default_vocabularies() {
  return array(
    'oa_bookmark_tags' => array(
      'name' => 'Bookmark Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_oa_bookmark_tags',
      'weight' => '-2',
      'nodes' => array(
        'oa_bookmark' => 'oa_bookmark',
      ),
    ),
  );
}
