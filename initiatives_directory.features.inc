<?php

/**
 * Implementation of hook_views_default_views().
 */
function initiatives_directory_views_default_views() {
  module_load_include('inc', 'initiatives_directory', 'initiatives_directory.features.views');
  $args = func_get_args();
  return call_user_func_array('_initiatives_directory_views_default_views', $args);
}
