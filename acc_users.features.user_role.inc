<?php
/**
 * @file
 * acc_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function acc_users_user_default_roles() {
  $roles = array();

  // Exported role: access editor.
  $roles['access editor'] = array(
    'name' => 'access editor',
    'weight' => 101,
    'machine_name' => 'acc_editor',
  );

  // Exported role: access manager.
  $roles['access manager'] = array(
    'name' => 'access manager',
    'weight' => 100,
    'machine_name' => 'acc_manager',
  );

  return $roles;
}
