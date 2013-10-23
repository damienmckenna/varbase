<?php
/**
 * Implements hook_css_alter().
 */
function vartheme2_css_alter(&$css) {
  $user_module_path = drupal_get_path('module', 'user');
  // Add overrides.
  $user_css = $user_module_path . '/user.css';
  $css[$user_css] = array(
    'data' => $user_css,
    'type' => 'file',
    'every_page' => TRUE,
    'media' => 'all',
    'preprocess' => TRUE,
    'group' => CSS_DEFAULT,
  );
}