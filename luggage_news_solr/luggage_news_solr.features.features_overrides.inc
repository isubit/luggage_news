<?php
/**
 * @file
 * luggage_news_solr.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function luggage_news_solr_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-news-field_category.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_category.display|default|settings|path"] = array(
    'search_path' => 'http://preview.ent.iastate.edu/search/content',
  );
  $overrides["field_instance.node-news-field_category.display|default|settings|target"] = '_self';
  $overrides["field_instance.node-news-field_category.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_category.display|full"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news-field_category.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_category.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|default|label"] = 'hidden';
  $overrides["field_instance.node-news-field_tags.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|default|settings"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news-field_tags.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|full|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|full|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-news-field_tags.display|search_result"]["DELETED"] = TRUE;

 return $overrides;
}
