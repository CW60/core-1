DROP TABLE IF EXISTS `characters`.`character_altspec`;
CREATE TABLE `characters`.`character_altspec` (
  `guid` int(11) unsigned NOT NULL default '0' COMMENT 'Global Unique Identifier',
  `altspells` longtext,
  PRIMARY KEY  (`guid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC COMMENT='Player Dual Spec System';

--
-- Dumping data for table `characters_altspec`
--

LOCK TABLES `characters`.`character_altspec` WRITE;
/*!40000 ALTER TABLE `characters`.`character_altspec` DISABLE KEYS */;
/*!40000 ALTER TABLE `characters`.`character_altspec` ENABLE KEYS */;
UNLOCK TABLES;


DROP TABLE IF EXISTS `character_altspec_action`;
CREATE TABLE `character_altspec_action` (
  `guid` int(11) unsigned NOT NULL default '0' COMMENT 'Global Unique Identifier',
  `button` tinyint(3) unsigned NOT NULL default '0',
  `action` smallint(5) unsigned NOT NULL default '0',
  `type` tinyint(3) unsigned NOT NULL default '0',
  `misc` tinyint(3) unsigned NOT NULL default '0',
  PRIMARY KEY  (`guid`,`button`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC COMMENT='Player Dual Spec System, table for actions';

--
-- Dumping data for table `character_altspec_action`
--

LOCK TABLES `character_altspec_action` WRITE;
/*!40000 ALTER TABLE `character_altspec_action` DISABLE KEYS */;
/*!40000 ALTER TABLE `character_altspec_action` ENABLE KEYS */;
UNLOCK TABLES;