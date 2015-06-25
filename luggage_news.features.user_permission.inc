<?php
/**
 * @file
 * luggage_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_type'.
  $permissions['delete terms in news_type'] = array(
    'name' => 'delete terms in news_type',
    'roles' => array(
      'taxonomy editor' => 'taxonomy editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_type'.
  $permissions['edit terms in news_type'] = array(
    'name' => 'edit terms in news_type',
    'roles' => array(
      'taxonomy editor' => 'taxonomy editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
