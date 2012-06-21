<?php

/**
 * Implements hook_drush_help().
 */
function dhap_drush_help($section) {
  switch ($section) {
    case 'meta:dhap:title':
      return dt('Drush Tools for Highly Attractive People');
  }
}

/**
 * Implements hook_drush_command().
 */
function dhap_drush_command() {
  $items = array();

  $items['site-builder'] = array(
    'description' => 'Generate scaffolding for a typical multi-site drush make directory',
    'arguments' => array(),
    'options' => array(),
    'examples' => array(),
    'aliases' => array('sb'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  return $items;
}

/**
 * Implements drush_hook_COMMAND().
 */
function drush_dhap_site_builder() {
  // @todo
  // use the template files to write scaffolding code to the filesystem.
  drush_log('Someday maybe..');
  return TRUE;
}