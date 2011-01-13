<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function oa_bookmark_user_default_permissions() {
  $permissions = array();

  // Exported permission: create oa_bookmark content
  $permissions['create oa_bookmark content'] = array(
    'name' => 'create oa_bookmark content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any oa_bookmark content
  $permissions['delete any oa_bookmark content'] = array(
    'name' => 'delete any oa_bookmark content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own oa_bookmark content
  $permissions['delete own oa_bookmark content'] = array(
    'name' => 'delete own oa_bookmark content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit any oa_bookmark content
  $permissions['edit any oa_bookmark content'] = array(
    'name' => 'edit any oa_bookmark content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own oa_bookmark content
  $permissions['edit own oa_bookmark content'] = array(
    'name' => 'edit own oa_bookmark content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
