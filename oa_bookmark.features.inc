<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function oa_bookmark_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "taxonomy_export" && $api == "default_taxonomy_exports") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function oa_bookmark_node_info() {
  $items = array(
    'oa_bookmark' => array(
      'name' => t('Bookmark'),
      'module' => 'features',
      'description' => t('A bookmark feature for Open Atrium. They can be shared within groups.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<h3>Create a bookmark</h3>
 <li>From your Open Atrium site, drag and drop the bookmarklet link provided into your browser\'s bookmarks bar.</li>
 <li>When browsing the web, just click this bookmarklet, and your can save a bookmark to your group.</li>
 <li>If you highlight text in the page you want to bookmark, that text will be excerpted into the bookmark as well.</li>
'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function oa_bookmark_views_api() {
  return array(
    'api' => '2',
  );
}
