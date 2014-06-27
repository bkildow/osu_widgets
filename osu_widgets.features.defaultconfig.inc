<?php
/**
 * @file
 * osu_widgets.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function osu_widgets_defaultconfig_features() {
  return array(
    'osu_widgets' => array(
      'ds_field_settings_info' => 'ds_field_settings_info',
      'ds_layout_settings_info' => 'ds_layout_settings_info',
    ),
  );
}

/**
 * Implements hook_defaultconfig_ds_field_settings_info().
 */
function osu_widgets_defaultconfig_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|osu_carousel|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'osu_carousel';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_osu_carousel_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_carousel',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|osu_carousel|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|osu_slideshow|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'osu_slideshow';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_osu_slideshow_content' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_slideshow',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|osu_slideshow|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_defaultconfig_ds_layout_settings_info().
 */
function osu_widgets_defaultconfig_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|osu_spotlight|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'osu_spotlight';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_osu_spotlight_images',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_osu_spotlight_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|osu_spotlight|default'] = $ds_layout;

  return $export;
}
