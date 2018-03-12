FILE(REMOVE_RECURSE
  "CMakeFiles/updateqm"
  "antimicro_zh_CN.qm"
  "antimicro_ru.qm"
  "antimicro_br.qm"
  "antimicro_de.qm"
  "antimicro_uk.qm"
  "antimicro_fr.qm"
  "antimicro_ja.qm"
  "antimicro_sr.qm"
  "antimicro_en.qm"
  "antimicro.qm"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/updateqm.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
