# OLD CODE, DO NOT USE
## this is here for archival uses
## if you do use this, please use cmake instead of what msvc usually does
## a similar project would be maple-ml/cinnamon or geode

# spookydash

SpookyDash is a mod sdk to allow easier making of mods for Geometry Dash. It allows a modder to access most Geometry Dash functions and use all cocos2d-x classes.

## spookymod

SpookyMod is the modloader that injects mods made with SpookyDash to Geometry Dash. It is also compatible with non-SpookyDash mods. SpookyMod is not finished so for the time being I would recommended using [modldr](https://github.com/HJfod/ModLdr) by [HJFod](https://github.com/HJfod).

## SDK installation

Download this repo and paste the folder into your project. 

Add this to your Include Path: 

```$(SolutionDir)spookydash;$(SolutionDir)spookydash\minhook\include;$(SolutionDir)spookydash\cappuccino-sdk\incl\cocos2dx;$(SolutionDir)spookydash\cappuccino-sdk\incl\cocos2dx\include;$(SolutionDir)spookydash\cappuccino-sdk\incl\cocos2dx\kazmath\include;$(SolutionDir)spookydash\cappuccino-sdk\incl\cocos2dx\platform\win32;$(SolutionDir)spookydash\cappuccino-sdk\incl\cocos2dx\platform\third_party\win32;$(SolutionDir)spookydash\cappuccino-sdk\incl\cocos2dx\platform\third_party\win32\OGLES;$(SolutionDir)spookydash\cappuccino-sdk\incl\extensions;%(AdditionalIncludeDirectories);```

Add this to your Additional Dependencies:

```$(SolutionDir)spookydash\spookydash.lib;$(SolutionDir)spookydash\minhook\lib\libMinHook.x86.lib;$(SolutionDir)spookydash\cappuccino-sdk\lib\cappuccino.lib;$(SolutionDir)spookydash\cappuccino-sdk\lib\libExtensions.lib;%(AdditionalDependencies)```

You should be set! Just `#include "spookydash.h"`
