<?php
/**
 * @file
 * roc_main_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function roc_main_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_bg_color';
  $strongarm->value = '#F7F7F7';
  $export['back_to_top_bg_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_border_color';
  $strongarm->value = '#CCCCCC';
  $export['back_to_top_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_place';
  $strongarm->value = '3';
  $export['back_to_top_button_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_trigger';
  $strongarm->value = '100';
  $export['back_to_top_button_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_type';
  $strongarm->value = 'image';
  $export['back_to_top_button_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_hover_color';
  $strongarm->value = '#EEEEEE';
  $export['back_to_top_hover_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_admin';
  $strongarm->value = 1;
  $export['back_to_top_prevent_in_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_mobile';
  $strongarm->value = 1;
  $export['back_to_top_prevent_on_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_text_color';
  $strongarm->value = '#333333';
  $export['back_to_top_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-page-title' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'background' => '#E2E2E2',
    'header' => '#E2E2E2',
    'content' => '#ffffff',
    'navigation' => '#E2E2E2',
    'footer' => '#E2E2E2',
    'sidebars' => '#ffffff',
  );
  $export['designkit_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_max_limit';
  $strongarm->value = '20';
  $export['islandora_solr_facet_max_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_min_limit';
  $strongarm->value = '2';
  $export['islandora_solr_facet_min_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_pages_facet_limit';
  $strongarm->value = '100000';
  $export['islandora_solr_facet_pages_facet_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_pages_fields_data';
  $strongarm->value = array(
    0 => array(
      'solr_field' => 'mods_titleInfo_title_ms',
      'label' => 'Title',
      'path' => 'title',
    ),
    1 => array(
      'solr_field' => 'fgs_ownerId_s',
      'label' => 'People',
      'path' => 'people',
    ),
    2 => array(
      'solr_field' => 'mods_originInfo_place_placeTerm_code_s ',
      'label' => 'Places',
      'path' => 'place',
    ),
    3 => array(
      'solr_field' => 'mods_originInfo_publisher_ms',
      'label' => 'Organization',
      'path' => 'organization',
    ),
  );
  $export['islandora_solr_facet_pages_fields_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_pages_limit';
  $strongarm->value = '25';
  $export['islandora_solr_facet_pages_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_pages_search_form';
  $strongarm->value = 1;
  $export['islandora_solr_facet_pages_search_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['node_export_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_image_block';
  $strongarm->value = 1;
  $export['node_export_reset_changed_image_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'The May Bragdon Diary Project';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'roc_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_roc_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 1,
    'zen_wireframes' => 0,
    'designkit_color' => array(
      'background' => '#E2E2E2',
      'header' => '#E2E2E2',
      'content' => '#ffffff',
      'navigation' => '#E2E2E2',
      'footer' => '#E2E2E2',
      'sidebars' => '#ffffff',
    ),
  );
  $export['theme_roc_theme_settings'] = $strongarm;

  return $export;
}
