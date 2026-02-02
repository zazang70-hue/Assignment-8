#include "SpartaGameMode.h"
#include "SpartaCharacter.h"
#include "SpartaPlayerController.h" // PlayerController클래스를 사용
#include "SpartaProjectR/GameStateBace/SpartaGameState.h"


ASpartaGameMode::ASpartaGameMode()
{
    DefaultPawnClass = ASpartaCharacter::StaticClass();

    //언리얼 엔진에서 GameMode가 PlayerController를 
    // 기본 설정을 SpartaPlayerController로 인식하게 한다.
    PlayerControllerClass = ASpartaPlayerController::StaticClass();

    GameStateClass = ASpartaGameState::StaticClass();
}

