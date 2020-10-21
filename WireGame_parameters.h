#pragma once

// Name: novojogo, Version: 45

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WireGame.WireAbilityRuleset.GetIndexForAbility
struct UWireAbilityRuleset_GetIndexForAbility_Params
{
	class UClass*                                      Ability;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilityRuleset.GetAbilities
struct UWireAbilityRuleset_GetAbilities_Params
{
	TArray<struct FWireAbilityData>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilityScript.SpawnActor
struct UWireAbilityScript_SpawnActor_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingMethod;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilityScript.SendClientAuth
struct UWireAbilityScript_SendClientAuth_Params
{
	unsigned char                                      AbilityIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilityScript.OnServerExecute
struct UWireAbilityScript_OnServerExecute_Params
{
};

// Function WireGame.WireAbilityScript.OnServerDestroy
struct UWireAbilityScript_OnServerDestroy_Params
{
};

// Function WireGame.WireAbilityScript.OnClientExecute
struct UWireAbilityScript_OnClientExecute_Params
{
};

// Function WireGame.WireAbilityScript.OnClientDestroy
struct UWireAbilityScript_OnClientDestroy_Params
{
};

// Function WireGame.WireAbilityScript.OnClientAuth
struct UWireAbilityScript_OnClientAuth_Params
{
};

// Function WireGame.WireAbilityScript.GetRemainingCooldownTime
struct UWireAbilityScript_GetRemainingCooldownTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilityScript.GetCantExecuteReason
struct UWireAbilityScript_GetCantExecuteReason_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilityScript.CanExecuteAbility
struct UWireAbilityScript_CanExecuteAbility_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilitySystem.UseAbility
struct AWireAbilitySystem_UseAbility_Params
{
	unsigned char                                      AbilityIndex;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilitySystem.ServerUseCommanderAbility
struct AWireAbilitySystem_ServerUseCommanderAbility_Params
{
	unsigned char                                      AbilityIndex;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilitySystem.ServerAuthAbility
struct AWireAbilitySystem_ServerAuthAbility_Params
{
	unsigned char                                      AbilityIndex;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilitySystem.GetAbilityFromData
struct AWireAbilitySystem_GetAbilityFromData_Params
{
	struct FWireAbilityData                            AbilityData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWireAbilityScript*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAbilitySystem.DiscardClientAuth
struct AWireAbilitySystem_DiscardClientAuth_Params
{
};

// Function WireGame.WireAbilitySystem.AuthAbility
struct AWireAbilitySystem_AuthAbility_Params
{
	unsigned char                                      AbilityIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAmmoWidget.UpdateWidget
struct UWireAmmoWidget_UpdateWidget_Params
{
	class ASQEquipableItem*                            CurrentWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAmmoWidget.GetMagazineCount
struct UWireAmmoWidget_GetMagazineCount_Params
{
	class ASQEquipableItem*                            Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAmmoWidget.GetCurrentWeapon
struct UWireAmmoWidget_GetCurrentWeapon_Params
{
	class ASQEquipableItem*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAmmoWidget.ClearWidget
struct UWireAmmoWidget_ClearWidget_Params
{
};

// Function WireGame.WireCapturePointMapWidget.OnShortNameChanged
struct UWireCapturePointMapWidget_OnShortNameChanged_Params
{
};

// Function WireGame.WireCapturePointMapWidget.OnOwningTeamChanged
struct UWireCapturePointMapWidget_OnOwningTeamChanged_Params
{
};

// Function WireGame.WireCapturePointMapWidget.OnDisplayNameChanged
struct UWireCapturePointMapWidget_OnDisplayNameChanged_Params
{
};

// Function WireGame.WireCapturePointMapWidget.OnCapturingTeamChanged
struct UWireCapturePointMapWidget_OnCapturingTeamChanged_Params
{
};

// Function WireGame.WireCapturePointMapWidget.OnCaptureProgressChanged
struct UWireCapturePointMapWidget_OnCaptureProgressChanged_Params
{
};

// Function WireGame.WireCapturePointMapWidget.GetFlagControlValue
struct UWireCapturePointMapWidget_GetFlagControlValue_Params
{
	int                                                TeamID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCapturePointMapWidget.GetCapturePointScale
struct UWireCapturePointMapWidget_GetCapturePointScale_Params
{
	float                                              SizeX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesCaptureMapWidget.OnbIsFrontlineChanged
struct UWireFrontlinesCaptureMapWidget_OnbIsFrontlineChanged_Params
{
};

// Function WireGame.WireAssaultCaptureMapWidget.OnBoundaryAtlasIndexChanged
struct UWireAssaultCaptureMapWidget_OnBoundaryAtlasIndexChanged_Params
{
};

// Function WireGame.WireCapturePoint.OnRep_TeamCaptureRules
struct AWireCapturePoint_OnRep_TeamCaptureRules_Params
{
	unsigned char                                      OldState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCapturePoint.OnRep_OwningTeam
struct AWireCapturePoint_OnRep_OwningTeam_Params
{
	unsigned char                                      OldState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCapturePoint.OnRep_CapturingTeam
struct AWireCapturePoint_OnRep_CapturingTeam_Params
{
	unsigned char                                      OldState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCapturePoint.OnRep_CaptureProgress
struct AWireCapturePoint_OnRep_CaptureProgress_Params
{
	float                                              OldValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCapturePoint.GetTeamCanCapture
struct AWireCapturePoint_GetTeamCanCapture_Params
{
	unsigned char                                      TeamID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCapturePoint.GetFlagControlValue
struct AWireCapturePoint_GetFlagControlValue_Params
{
	unsigned char                                      InTeam;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesCapturePoint.GetOwningSector
struct AWireFrontlinesCapturePoint_GetOwningSector_Params
{
	class AWireFrontlinesSector*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesGameMode.OnGraphLatticeUpdated
struct AWireFrontlinesGameMode_OnGraphLatticeUpdated_Params
{
};

// Function WireGame.WireFrontlinesGameMode.GetRulesetState
struct AWireFrontlinesGameMode_GetRulesetState_Params
{
	class AWireBaseRulesetState*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesGameMode.CreateCaptureMarkers
struct AWireFrontlinesGameMode_CreateCaptureMarkers_Params
{
};

// Function WireGame.WireFrontlinesGraphActor.SectorStateChanged
struct AWireFrontlinesGraphActor_SectorStateChanged_Params
{
	class UWireFrontlinesGraphNodeComponent*           NodeComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WinningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesGraphActor.MulticastGraphUpdated
struct AWireFrontlinesGraphActor_MulticastGraphUpdated_Params
{
	class AWireFrontlinesSector*                       Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WinningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesGraphActor.GetAllSectors
struct AWireFrontlinesGraphActor_GetAllSectors_Params
{
	TArray<class AWireFrontlinesSector*>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesGraphNodeComponent.UpdateCaptureState
struct UWireFrontlinesGraphNodeComponent_UpdateCaptureState_Params
{
	class UWireFrontlinesGraphNodeComponent*           NodeComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WinningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesGraphNodeComponent.OnGraphInitialized
struct UWireFrontlinesGraphNodeComponent_OnGraphInitialized_Params
{
};

// Function WireGame.WirePlayableArea.OnRep_AllowedTeam
struct AWirePlayableArea_OnRep_AllowedTeam_Params
{
};

// Function WireGame.WirePlayableArea.GetRemainingBuffTime
struct AWirePlayableArea_GetRemainingBuffTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesPlayableArea.OnSectorStateChanged
struct AWireFrontlinesPlayableArea_OnSectorStateChanged_Params
{
};

// Function WireGame.WireFrontlinesPlayableArea.OnEnteredPlayingStage
struct AWireFrontlinesPlayableArea_OnEnteredPlayingStage_Params
{
};

// Function WireGame.WireBaseRulesetState.OnRep_MatchState
struct AWireBaseRulesetState_OnRep_MatchState_Params
{
	EWireGameMatchState                                OldMatchState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireBaseRulesetState.GetRemainingPrepTime
struct AWireBaseRulesetState_GetRemainingPrepTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireBaseRulesetState.GetRemainingMatchTime
struct AWireBaseRulesetState_GetRemainingMatchTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireAssaultRulesetState.GetAttackingTeam
struct AWireAssaultRulesetState_GetAttackingTeam_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesSector.OnRep_TeamCapturabilities
struct AWireFrontlinesSector_OnRep_TeamCapturabilities_Params
{
};

// Function WireGame.WireFrontlinesSector.OnRep_OwningTeam
struct AWireFrontlinesSector_OnRep_OwningTeam_Params
{
	unsigned char                                      LastTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesSector.OnIndexedTeamStatesReplicated
struct AWireFrontlinesSector_OnIndexedTeamStatesReplicated_Params
{
};

// Function WireGame.WireFrontlinesSector.GetSectorCaptureValue
struct AWireFrontlinesSector_GetSectorCaptureValue_Params
{
	int                                                InTeamId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesSector.GetIsFrontlineSector
struct AWireFrontlinesSector_GetIsFrontlineSector_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesSector.GetAllCapturePoints
struct AWireFrontlinesSector_GetAllCapturePoints_Params
{
	TArray<class AWireFrontlinesCapturePoint*>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCaptureScoreRuleset.PointCapturing
struct AWireCaptureScoreRuleset_PointCapturing_Params
{
	class AWireCapturePoint*                           CapturePoint;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCaptureScoreRuleset.PointCaptured
struct AWireCaptureScoreRuleset_PointCaptured_Params
{
	class AWireCapturePoint*                           CapturePoint;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCaptureScoreRuleset.OnNotifyCapturing
struct AWireCaptureScoreRuleset_OnNotifyCapturing_Params
{
	class APlayerController*                           PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireCapturePoint*                           CapturePoint;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCaptureScoreRuleset.OnNotifyCaptured
struct AWireCaptureScoreRuleset_OnNotifyCaptured_Params
{
	class APlayerController*                           PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireCapturePoint*                           CapturePoint;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCommanderAbilityRuleset.GetCommanderAbilities
struct UWireCommanderAbilityRuleset_GetCommanderAbilities_Params
{
	TArray<struct FWireCommanderAbilityData>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCommanderOrderScript.GatherOrderPoints
struct UWireCommanderOrderScript_GatherOrderPoints_Params
{
	class AWireCommanderOrderVolume*                   Owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASQSoldier*>                          RelevantSoldiers;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCommanderOrderVolume.OnRep_Squad
struct AWireCommanderOrderVolume_OnRep_Squad_Params
{
};

// Function WireGame.WireCommanderState.ServerDebugAddCommanderPoints
struct AWireCommanderState_ServerDebugAddCommanderPoints_Params
{
	int                                                Points;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCommanderState.OnRep_TeamState
struct AWireCommanderState_OnRep_TeamState_Params
{
};

// Function WireGame.WireCommanderState.AddCommandPointsOnTeamCapturingPoint
struct AWireCommanderState_AddCommandPointsOnTeamCapturingPoint_Params
{
	class AWireCapturePoint*                           InPoint;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCommanderState.AddCommandPoints
struct AWireCommanderState_AddCommandPoints_Params
{
	int                                                Points;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCompassWidget.RemoveWorldMarker
struct UWireCompassWidget_RemoveWorldMarker_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCompassWidget.OnNewWorldMarker
struct UWireCompassWidget_OnNewWorldMarker_Params
{
	class AWireWorldMarker*                            WorldMarker;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCoreStateSquadItemWidget.OnSquadTypeChanged
struct UWireCoreStateSquadItemWidget_OnSquadTypeChanged_Params
{
};

// Function WireGame.WireCoreStateSquadListComponent.SetSquadTypeRootWidgets
struct UWireCoreStateSquadListComponent_SetSquadTypeRootWidgets_Params
{
	TMap<EWireSquadType, class UPanelWidget*>          InSquadTypeRoots;                                          // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<EWireSquadType, class UUserWidget*>           Separators;                                                // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCuttableInterface.IsCuttable
struct UWireCuttableInterface_IsCuttable_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireCuttableInterface.CutWireSection
struct UWireCuttableInterface_CutWireSection_Params
{
	class AWireEquippableCutter*                       CutterActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PrimComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDeployableAmmoBag.CanDisplayPrompt
struct AWireDeployableAmmoBag_CanDisplayPrompt_Params
{
	class AController*                                 Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleFence.OnRep_DestroyedFlags
struct AWireDestructibleFence_OnRep_DestroyedFlags_Params
{
};

// Function WireGame.WireDestructibleFence.OnComponentDestroyed
struct AWireDestructibleFence_OnComponentDestroyed_Params
{
	class UWireFenceMeshComponent*                     MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleFence.MulticastMultiComponentDestroyed
struct AWireDestructibleFence_MulticastMultiComponentDestroyed_Params
{
	TArray<struct FVector_NetQuantize>                 ImpactPoints;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleFence.MulticastComponentDestroyed
struct AWireDestructibleFence_MulticastComponentDestroyed_Params
{
	struct FVector                                     ImpactPoint;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleBarbed.OnCutWireSection
struct AWireDestructibleBarbed_OnCutWireSection_Params
{
	class UWireFenceMeshComponent*                     MeshComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleBarbed.MulticastCutWireSection
struct AWireDestructibleBarbed_MulticastCutWireSection_Params
{
	int                                                MeshIndex;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleMeshActor.UpdateDestroyedVisuals
struct AWireDestructibleMeshActor_UpdateDestroyedVisuals_Params
{
};

// Function WireGame.WireDestructibleMeshActor.OnRep_Health
struct AWireDestructibleMeshActor_OnRep_Health_Params
{
	float                                              OldHealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleMeshActor.OnRep_Destroyed
struct AWireDestructibleMeshActor_OnRep_Destroyed_Params
{
};

// Function WireGame.WireDestructibleMeshActor.OnHealthChanged
struct AWireDestructibleMeshActor_OnHealthChanged_Params
{
	float                                              NewHealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldHealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDestructibleMeshActor.OnDestroyedChanged
struct AWireDestructibleMeshActor_OnDestroyedChanged_Params
{
};

// Function WireGame.WireDismembermentLimbActor.StopSimulation
struct AWireDismembermentLimbActor_StopSimulation_Params
{
	bool                                               bInstantDestroy;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireDismembermentLimbActor.StartSimulation
struct AWireDismembermentLimbActor_StartSimulation_Params
{
	class UPrimitiveComponent*                         ParentComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireEquippableCutter.ServerPerformCut
struct AWireEquippableCutter_ServerPerformCut_Params
{
	class AActor*                                      InWire;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireEquippableCutter.OnRep_TargetWire
struct AWireEquippableCutter_OnRep_TargetWire_Params
{
};

// Function WireGame.WireEquippableCutter.IsCuttingWire
struct AWireEquippableCutter_IsCuttingWire_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireEquippableCutter.GetRemainingCutTime
struct AWireEquippableCutter_GetRemainingCutTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireEquippableCutter.CanUseTool
struct AWireEquippableCutter_CanUseTool_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFlareWeapon.ServerSpawnSupportActor
struct AWireFlareWeapon_ServerSpawnSupportActor_Params
{
	struct FVector_NetQuantize                         Location;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireFrontlinesCaptureHex.OnRep_CaptureData
struct AWireFrontlinesCaptureHex_OnRep_CaptureData_Params
{
};

// Function WireGame.WireFrontlinesHexMapWidget.OnHexRadiusChanged
struct UWireFrontlinesHexMapWidget_OnHexRadiusChanged_Params
{
};

// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorOwningTeamChanged
struct UWireFrontlinesSectorMapWidget_OnSectorOwningTeamChanged_Params
{
};

// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorNameChanged
struct UWireFrontlinesSectorMapWidget_OnSectorNameChanged_Params
{
};

// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorFrontlineChanged
struct UWireFrontlinesSectorMapWidget_OnSectorFrontlineChanged_Params
{
};

// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorFlagChanged
struct UWireFrontlinesSectorMapWidget_OnSectorFlagChanged_Params
{
};

// Function WireGame.WireFrontlinesSectorMapWidget.GetPlayableAreaTransform
struct UWireFrontlinesSectorMapWidget_GetPlayableAreaTransform_Params
{
	float                                              OffsetX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameNotifyWidget.InitializeNotify
struct UWireGameNotifyWidget_InitializeNotify_Params
{
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     InNotifyReason;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDuration;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameNotifyWidget.HideNotify
struct UWireGameNotifyWidget_HideNotify_Params
{
	bool                                               bInstant;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameplayStatics.GetTidesGameplayManager
struct UWireGameplayStatics_GetTidesGameplayManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireTidesRulesetState*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameplayStatics.GetRulesetState
struct UWireGameplayStatics_GetRulesetState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQRulesetState*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameplayStatics.ApplyDestructibleFenceRadialDamage
struct UWireGameplayStatics_ApplyDestructibleFenceRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameSpawnMobile.AttachToActor
struct AWireGameSpawnMobile_AttachToActor_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameSquadSpawn.OnRep_SquadState
struct AWireGameSquadSpawn_OnRep_SquadState_Params
{
};

// Function WireGame.WireGameUserSettings.SetDepthOfFieldAmount
struct UWireGameUserSettings_SetDepthOfFieldAmount_Params
{
	bool                                               inDepthOfField;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGameUserSettings.RequestExit
struct UWireGameUserSettings_RequestExit_Params
{
};

// Function WireGame.WireGameUserSettings.GetDepthOfFieldAmount
struct UWireGameUserSettings_GetDepthOfFieldAmount_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGasMask.ServerMaskEquipped
struct AWireGasMask_ServerMaskEquipped_Params
{
	bool                                               bNewEquipped;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireGasMask.OnRep_MaskEquipped
struct AWireGasMask_OnRep_MaskEquipped_Params
{
};

// Function WireGame.WireHUD.ToggleReviveWidget
struct AWireHUD_ToggleReviveWidget_Params
{
	bool                                               bShow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireHUD.OpenChat
struct AWireHUD_OpenChat_Params
{
	ESQChat                                            Channel;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireHUD.OnFadeToDeathFinished
struct AWireHUD_OnFadeToDeathFinished_Params
{
};

// Function WireGame.WireHUD.NotifyBecameWounded
struct AWireHUD_NotifyBecameWounded_Params
{
};

// Function WireGame.WireHUD.DestroySceneWidget
struct AWireHUD_DestroySceneWidget_Params
{
	class AActor*                                      SceneActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireHUD.CreateSceneWidget
struct AWireHUD_CreateSceneWidget_Params
{
	class AActor*                                      SceneActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MarkerLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseStaticLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.ServerStopCharging
struct AWireInfantryWeapon_ServerStopCharging_Params
{
};

// Function WireGame.WireInfantryWeapon.ServerStartCharging
struct AWireInfantryWeapon_ServerStartCharging_Params
{
};

// Function WireGame.WireInfantryWeapon.ServerStartAttacking
struct AWireInfantryWeapon_ServerStartAttacking_Params
{
};

// Function WireGame.WireInfantryWeapon.ServerNotifyMeleeHit
struct AWireInfantryWeapon_ServerNotifyMeleeHit_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.ServerFireProjectileMulti
struct AWireInfantryWeapon_ServerFireProjectileMulti_Params
{
	struct FWireShotInfoMulti                          ShotInfo;                                                  // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.ServerEquipMelee
struct AWireInfantryWeapon_ServerEquipMelee_Params
{
	bool                                               bEquip;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.OnRep_IsMeleeEquipped
struct AWireInfantryWeapon_OnRep_IsMeleeEquipped_Params
{
};

// Function WireGame.WireInfantryWeapon.OnEnteredMeleeState
struct AWireInfantryWeapon_OnEnteredMeleeState_Params
{
	EWireMeleeState                                    NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireMeleeState                                    OldState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.MulticastStopCharging
struct AWireInfantryWeapon_MulticastStopCharging_Params
{
};

// Function WireGame.WireInfantryWeapon.MulticastStartCharging
struct AWireInfantryWeapon_MulticastStartCharging_Params
{
};

// Function WireGame.WireInfantryWeapon.MulticastStartAttacking
struct AWireInfantryWeapon_MulticastStartAttacking_Params
{
};

// Function WireGame.WireInfantryWeapon.MulticastFireProjectileMulti
struct AWireInfantryWeapon_MulticastFireProjectileMulti_Params
{
	TArray<struct FShotInfoMultiData>                  Infos;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.MulticastEquipMelee
struct AWireInfantryWeapon_MulticastEquipMelee_Params
{
	bool                                               bEquip;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.GetMeleeState
struct AWireInfantryWeapon_GetMeleeState_Params
{
	EWireMeleeState                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInfantryWeapon.CanSwitchWeapon
struct AWireInfantryWeapon_CanSwitchWeapon_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInventoryGroupWidget.OnSelectedChanged
struct UWireInventoryGroupWidget_OnSelectedChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInventoryGroupWidget.OnActiveChanged
struct UWireInventoryGroupWidget_OnActiveChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInventoryItemWidget.OnSelectedChanged
struct UWireInventoryItemWidget_OnSelectedChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInventoryItemWidget.OnGroupActiveChanged
struct UWireInventoryItemWidget_OnGroupActiveChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireInventoryItemWidget.OnActiveChanged
struct UWireInventoryItemWidget_OnActiveChanged_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.UnregisterSignificanceActor
struct UWireKismetLibrary_UnregisterSignificanceActor_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.SortSectorsByTeam
struct UWireKismetLibrary_SortSectorsByTeam_Params
{
	TArray<class AWireFrontlinesSector*>               InSectors;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TeamID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AWireFrontlinesSector*>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.SortSectors
struct UWireKismetLibrary_SortSectors_Params
{
	TArray<class AWireTidesSector*>                    InList;                                                    // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bLowestFirst;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AWireTidesSector*>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.ReverseSectorOrder
struct UWireKismetLibrary_ReverseSectorOrder_Params
{
	TArray<class AWireFrontlinesSector*>               InSectors;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AWireFrontlinesSector*>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.RegisterSignificanceActor
struct UWireKismetLibrary_RegisterSignificanceActor_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.IsWithEditor
struct UWireKismetLibrary_IsWithEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.HideLoadingScreen
struct UWireKismetLibrary_HideLoadingScreen_Params
{
	class UObject*                                     WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.GetSquadRoleData
struct UWireKismetLibrary_GetSquadRoleData_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQRoleSettings*>                     Settings;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bCheckAvalibility;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWireSquadRoleDataGroup>             OutGroups;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.GetScreenSizeAndDistance
struct UWireKismetLibrary_GetScreenSizeAndDistance_Params
{
	class USceneComponent*                             InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ViewLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FOV;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutScreenSize;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutDistance;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.GetMapDisplayName
struct UWireKismetLibrary_GetMapDisplayName_Params
{
	struct FString                                     MapPath;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.GetDevelopmentUpdates
struct UWireKismetLibrary_GetDevelopmentUpdates_Params
{
	TArray<struct FWireDevelopmentUpdateData>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.GetBuildUpdate
struct UWireKismetLibrary_GetBuildUpdate_Params
{
	struct FWireDevelopmentUpdateData                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireKismetLibrary.GetBTWGameUserSettings
struct UWireKismetLibrary_GetBTWGameUserSettings_Params
{
	class UWireGameUserSettings*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireManualWeapon.ServerManualAction
struct AWireManualWeapon_ServerManualAction_Params
{
};

// Function WireGame.WireManualWeapon.ServerCancelReload
struct AWireManualWeapon_ServerCancelReload_Params
{
};

// Function WireGame.WireManualWeapon.OnRep_ManualAction
struct AWireManualWeapon_OnRep_ManualAction_Params
{
};

// Function WireGame.WireManualWeapon.MulticastCancelReload
struct AWireManualWeapon_MulticastCancelReload_Params
{
};

// Function WireGame.WireMeleeWeapon.ServerStopBlocking
struct AWireMeleeWeapon_ServerStopBlocking_Params
{
};

// Function WireGame.WireMeleeWeapon.ServerStartBlocking
struct AWireMeleeWeapon_ServerStartBlocking_Params
{
	EWireMeleeBlockDir                                 InBlockDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.ServerStartAttacking
struct AWireMeleeWeapon_ServerStartAttacking_Params
{
	struct FWireMeleeReplicatedAttackData              AttackData;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.ServerNotifyHit
struct AWireMeleeWeapon_ServerNotifyHit_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.OnUpdateMouseDelta
struct AWireMeleeWeapon_OnUpdateMouseDelta_Params
{
	float                                              MouseX;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseY;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.OnEnteredState
struct AWireMeleeWeapon_OnEnteredState_Params
{
	EWireMeleeState                                    NewState;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireMeleeState                                    OldState;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.MulticastStopBlocking
struct AWireMeleeWeapon_MulticastStopBlocking_Params
{
};

// Function WireGame.WireMeleeWeapon.MulticastStartBlocking
struct AWireMeleeWeapon_MulticastStartBlocking_Params
{
	EWireMeleeBlockDir                                 InBlockDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.MulticastStartAttacking
struct AWireMeleeWeapon_MulticastStartAttacking_Params
{
	struct FWireMeleeReplicatedAttackData              AttackData;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.GetState
struct AWireMeleeWeapon_GetState_Params
{
	EWireMeleeState                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMeleeWeapon.GetNewBlockDirection
struct AWireMeleeWeapon_GetNewBlockDirection_Params
{
	EWireMeleeBlockDir                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMovementInterface.GetStaminaPenalty
struct UWireMovementInterface_GetStaminaPenalty_Params
{
	float                                              NativePenalty;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMovementInterface.GetSlopeModifier
struct UWireMovementInterface_GetSlopeModifier_Params
{
	float                                              NativeModifier;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireMovementInterface.GetMovementSpeedModifier
struct UWireMovementInterface_GetMovementSpeedModifier_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireObjectiveMapWidget.OnDataChanged
struct UWireObjectiveMapWidget_OnDataChanged_Params
{
};

// Function WireGame.WirePawnInventoryComponent.OnRep_GasMask
struct UWirePawnInventoryComponent_OnRep_GasMask_Params
{
};

// Function WireGame.WirePlayerCameraManager.StopFadeToDeath
struct AWirePlayerCameraManager_StopFadeToDeath_Params
{
	bool                                               bInstant;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerCameraManager.StartFadeToDeath
struct AWirePlayerCameraManager_StartFadeToDeath_Params
{
	bool                                               bInstant;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.TrackMarkerPlaced
struct AWirePlayerController_TrackMarkerPlaced_Params
{
};

// Function WireGame.WirePlayerController.ShowPhasePrepWidget
struct AWirePlayerController_ShowPhasePrepWidget_Params
{
	bool                                               bShow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.ShowMaskTexture
struct AWirePlayerController_ShowMaskTexture_Params
{
	class UTexture2D*                                  MaskTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaskEquipped;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.ShowGameplayNotification
struct AWirePlayerController_ShowGameplayNotification_Params
{
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     InNotifyReason;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InContext;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDuration;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireGameNotifyWidget*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.ServerRequestSupportMarker
struct AWirePlayerController_ServerRequestSupportMarker_Params
{
	struct FVector_NetQuantize                         Location;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.ServerDestroyRallyPoint
struct AWirePlayerController_ServerDestroyRallyPoint_Params
{
};

// Function WireGame.WirePlayerController.RequestSupportMarker
struct AWirePlayerController_RequestSupportMarker_Params
{
	struct FText                                       OutErrorMessage;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FVector                                     PlacementLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.OnRep_BeingRevived
struct AWirePlayerController_OnRep_BeingRevived_Params
{
};

// Function WireGame.WirePlayerController.NotifyInEnemyTerritory
struct AWirePlayerController_NotifyInEnemyTerritory_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.GetInteractProgress
struct AWirePlayerController_GetInteractProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.GetGiveUpProgress
struct AWirePlayerController_GetGiveUpProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WirePlayerController.DestroyRallyPoint
struct AWirePlayerController_DestroyRallyPoint_Params
{
};

// Function WireGame.WirePlayerController.DebugCrash
struct AWirePlayerController_DebugCrash_Params
{
};

// Function WireGame.WirePlayerController.CanPlaceMarker
struct AWirePlayerController_CanPlaceMarker_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSignificanceInterface.HandleSignificance
struct UWireSignificanceInterface_HandleSignificance_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldSignificance;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Significance;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinal;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSignificanceInterface.EvaluateSignificance
struct UWireSignificanceInterface_EvaluateSignificance_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentSignificance;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ViewPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSLAbilityScript.OnEndAbility
struct UWireSLAbilityScript_OnEndAbility_Params
{
};

// Function WireGame.WireSLAbilityScript.OnAbilityTick
struct UWireSLAbilityScript_OnAbilityTick_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.SpawnHitBloodSplatter
struct AWireSoldier_SpawnHitBloodSplatter_Params
{
	class ASQProjectile*                               Projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShotDirection;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.SpawnHitBlood
struct AWireSoldier_SpawnHitBlood_Params
{
	float                                              Damage;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShotDirection;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.SetWireSlowdown
struct AWireSoldier_SetWireSlowdown_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.SetWaterSlowdown
struct AWireSoldier_SetWaterSlowdown_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.SetFocus
struct AWireSoldier_SetFocus_Params
{
	bool                                               bNewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.PlayCameraShake
struct AWireSoldier_PlayCameraShake_Params
{
	class UClass*                                      Shake;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    UserPlaySpaceRot;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSoldier.OnRep_ReplicatedCustomization
struct AWireSoldier_OnRep_ReplicatedCustomization_Params
{
};

// Function WireGame.WireSoldier.OnRep_DismembermentFlags
struct AWireSoldier_OnRep_DismembermentFlags_Params
{
};

// Function WireGame.WireSoldier.GetNormalizedInteractProgress
struct AWireSoldier_GetNormalizedInteractProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquad.GetSquadType
struct AWireSquad_GetSquadType_Params
{
	EWireSquadType                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadRallyPoint.OnPlayableAreaTeamChanged
struct AWireSquadRallyPoint_OnPlayableAreaTeamChanged_Params
{
	class AWirePlayableArea*                           InArea;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.UseSLAbility
struct AWireSquadState_UseSLAbility_Params
{
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AbilityIndex;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.UseDeployable
struct AWireSquadState_UseDeployable_Params
{
	class AWireDeployable*                             InDeployable;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.ReleaseDeployable
struct AWireSquadState_ReleaseDeployable_Params
{
	class AWireDeployable*                             InDeployable;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.OnRep_SquadType
struct AWireSquadState_OnRep_SquadType_Params
{
};

// Function WireGame.WireSquadState.GetSLAbilityRuleset
struct AWireSquadState_GetSLAbilityRuleset_Params
{
	class UWireAbilityRuleset*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.GetCantUseSLAbilityReason
struct AWireSquadState_GetCantUseSLAbilityReason_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.DestroyOldestDeployable
struct AWireSquadState_DestroyOldestDeployable_Params
{
};

// Function WireGame.WireSquadState.CanUseSLAbility
struct AWireSquadState_CanUseSLAbility_Params
{
	class ASQPlayerState*                              Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AbilityIndex;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadState.CanDeploy
struct AWireSquadState_CanDeploy_Params
{
	class UClass*                                      InDeployableType;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadStatePrivate.OnRep_SupportMarkerData
struct AWireSquadStatePrivate_OnRep_SupportMarkerData_Params
{
};

// Function WireGame.WireSquadSupportActor.GetRoundLocation
struct AWireSquadSupportActor_GetRoundLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadSupportActor.GetRoundInterval
struct AWireSquadSupportActor_GetRoundInterval_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadSupportArtillery.SpawnExplodeEffects
struct AWireSquadSupportArtillery_SpawnExplodeEffects_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadSupportArtillery.ServerExplode
struct AWireSquadSupportArtillery_ServerExplode_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadSupportArtillery.PlayIncomingSound
struct AWireSquadSupportArtillery_PlayIncomingSound_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSquadSupportArtillery.GetSupportEndTime
struct AWireSquadSupportArtillery_GetSupportEndTime_Params
{
	float                                              ShellTotalDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.SortSteamFriends
struct UWireSteamBlueprintLibrary_SortSteamFriends_Params
{
	TArray<struct FWireSteamFriend>                    InFriends;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWireSteamFriend>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.OpenSteamUserProfile
struct UWireSteamBlueprintLibrary_OpenSteamUserProfile_Params
{
	struct FWireSteamId                                SteamId;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.GetSteamOnlineStatus
struct UWireSteamBlueprintLibrary_GetSteamOnlineStatus_Params
{
	EWireSteamOnlineStatus                             OutStatus;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.GetSteamId
struct UWireSteamBlueprintLibrary_GetSteamId_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWireSteamId                                OutSteamId;                                                // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendsList
struct UWireSteamBlueprintLibrary_GetSteamFriendsList_Params
{
	class APlayerController*                           PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWireSteamFriend>                    OutFriends;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendRichPresence
struct UWireSteamBlueprintLibrary_GetSteamFriendRichPresence_Params
{
	struct FWireSteamId                                SteamId;                                                   // (Parm, NativeAccessSpecifierPublic)
	struct FString                                     PresenceKey;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendAvatar
struct UWireSteamBlueprintLibrary_GetSteamFriendAvatar_Params
{
	struct FWireSteamId                                FriendSteamId;                                             // (Parm, NativeAccessSpecifierPublic)
	EWireSteamAvatarSize                               AvatarSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireSteamAsyncCallback                            AsyncResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriend
struct UWireSteamBlueprintLibrary_GetSteamFriend_Params
{
	class APlayerController*                           PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWireSteamId                                FriendSteamId;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FWireSteamFriend                            OutFriend;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSteamFriendsCallbackProxy.GetAndStoreFriendsList
struct UWireSteamFriendsCallbackProxy_GetAndStoreFriendsList_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireSteamFriendsCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireSupportMarkerMapWidget.OnSquadIdChanged
struct UWireSupportMarkerMapWidget_OnSquadIdChanged_Params
{
};

// Function WireGame.WireSupportMarkerMapWidget.OnIsActiveChanged
struct UWireSupportMarkerMapWidget_OnIsActiveChanged_Params
{
};

// Function WireGame.WireSupportMarkerMapWidget.GetMarkerVisiblity
struct UWireSupportMarkerMapWidget_GetMarkerVisiblity_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamInfo.GetSquadRoles
struct UWireTeamInfo_GetSquadRoles_Params
{
	EWireSquadType                                     InSquadType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USQRoleSettings*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamInfo.GetRadialModal
struct UWireTeamInfo_GetRadialModal_Params
{
	class ASQPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBuild;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamInfo.GetDefaultRoles
struct UWireTeamInfo_GetDefaultRoles_Params
{
	TArray<class USQRoleSettings*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamState.OnNewCommander
struct AWireTeamState_OnNewCommander_Params
{
	class ASQSquad*                                    Squad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQPlayerController*                         PC;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamState.OnCommandSquadDestroyed
struct AWireTeamState_OnCommandSquadDestroyed_Params
{
	class AWireSquadState*                             CommandSquad;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamState.HasSquadType
struct AWireTeamState_HasSquadType_Params
{
	EWireSquadType                                     SquadType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamState.HasSquadRole
struct AWireTeamState_HasSquadRole_Params
{
	class USQRoleSettings*                             RoleSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireSquadType                                     SquadType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamState.GetSquadTotal
struct AWireTeamState_GetSquadTotal_Params
{
	EWireSquadType                                     InSquadType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTeamState.GetSquadNum
struct AWireTeamState_GetSquadNum_Params
{
	EWireSquadType                                     InSquadType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesObjective.OnRep_IsObjectiveComplete
struct AWireTidesObjective_OnRep_IsObjectiveComplete_Params
{
};

// Function WireGame.WireTidesObjective.OnRep_IsObjectiveActive
struct AWireTidesObjective_OnRep_IsObjectiveActive_Params
{
};

// Function WireGame.WireTidesObjective.OnObjectiveComplete
struct AWireTidesObjective_OnObjectiveComplete_Params
{
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesObjective.OnObjectiveActiveChanged
struct AWireTidesObjective_OnObjectiveActiveChanged_Params
{
};

// Function WireGame.WireTidesObjective.OnClientObjectiveCompleteChanged
struct AWireTidesObjective_OnClientObjectiveCompleteChanged_Params
{
};

// Function WireGame.WireTidesObjective.OnClientObjectiveActiveChanged
struct AWireTidesObjective_OnClientObjectiveActiveChanged_Params
{
};

// Function WireGame.WireTidesObjective.GetObjectiveMarkerDisplay
struct AWireTidesObjective_GetObjectiveMarkerDisplay_Params
{
	bool                                               bDisplayToAll;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OutTeam;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesCaptureObjective.OnCaptureStateChanged
struct AWireTidesCaptureObjective_OnCaptureStateChanged_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesCaptureObjective.CanTeamCapture
struct AWireTidesCaptureObjective_CanTeamCapture_Params
{
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesCaptureObjectiveRuleset.OnCaptureStateChanged
struct AWireTidesCaptureObjectiveRuleset_OnCaptureStateChanged_Params
{
	class AWireTidesCaptureObjective*                  Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesDestroyObjective.GetMesh
struct AWireTidesDestroyObjective_GetMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesDestroyObjective.GetDestroyedMesh
struct AWireTidesDestroyObjective_GetDestroyedMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesDestroyObjective.AllPlayDamageEffects
struct AWireTidesDestroyObjective_AllPlayDamageEffects_Params
{
	class UClass*                                      DamageClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesDestroyObjectiveRuleset.OnObjectiveDestroyed
struct AWireTidesDestroyObjectiveRuleset_OnObjectiveDestroyed_Params
{
	class AWireTidesDestroyObjective*                  Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesFlagStatusWidget.InitWidget
struct UWireTidesFlagStatusWidget_InitWidget_Params
{
	class AWireTidesSector*                            InSector;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressPercent
struct UWireTidesFlagStatusWidget_GetFlagProgressPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressBarStyle
struct UWireTidesFlagStatusWidget_GetFlagProgressBarStyle_Params
{
	struct FProgressBarStyle                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressBar
struct UWireTidesFlagStatusWidget_GetFlagProgressBar_Params
{
	class UProgressBar*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesGameMode.GetGameplayManager
struct AWireTidesGameMode_GetGameplayManager_Params
{
	class AWireTidesRulesetState*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesMapWidgetCaptureZone.UpdateCurrentSector
struct UWireTidesMapWidgetCaptureZone_UpdateCurrentSector_Params
{
};

// Function WireGame.WireTidesPlayableArea.TidesStateChanged
struct AWireTidesPlayableArea_TidesStateChanged_Params
{
	EWireTidesMatchState                               NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireTidesMatchState                               LastState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.OnSectorStateChanged
struct AWireTidesRulesetState_OnSectorStateChanged_Params
{
	class AWireTidesSector*                            Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.OnSectorFrontline
struct AWireTidesRulesetState_OnSectorFrontline_Params
{
	class AWireTidesSector*                            Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.OnSectorContested
struct AWireTidesRulesetState_OnSectorContested_Params
{
	class AWireTidesSector*                            Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ContestingTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.OnRep_TidesState
struct AWireTidesRulesetState_OnRep_TidesState_Params
{
	EWireTidesMatchState                               LastTidesState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.OnObjectiveCompleted
struct AWireTidesRulesetState_OnObjectiveCompleted_Params
{
	class AWireTidesObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.MulticastSectorContested
struct AWireTidesRulesetState_MulticastSectorContested_Params
{
	class AWireTidesSector*                            Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ContestingTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.MulticastPhaseStarted
struct AWireTidesRulesetState_MulticastPhaseStarted_Params
{
	class AWireTidesSector*                            Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireTidesSector*                            OtherSector;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.MulticastPhaseEnded
struct AWireTidesRulesetState_MulticastPhaseEnded_Params
{
	class AWireTidesSector*                            Sector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WinningTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWirePhaseEndReason                                EndReason;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.MulticastObjectiveCompleted
struct AWireTidesRulesetState_MulticastObjectiveCompleted_Params
{
	class AWireTidesObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.GetTeamPhaseWins
struct AWireTidesRulesetState_GetTeamPhaseWins_Params
{
	unsigned char                                      TeamID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.GetRemainingPrepTime
struct AWireTidesRulesetState_GetRemainingPrepTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.GetRemainingPhaseTime
struct AWireTidesRulesetState_GetRemainingPhaseTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.GetElapsedPrepTime
struct AWireTidesRulesetState_GetElapsedPrepTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesRulesetState.GetElapsedPhaseTime
struct AWireTidesRulesetState_GetElapsedPhaseTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSectionCaptureComponent.OnTidesStateChanged
struct UWireTidesSectionCaptureComponent_OnTidesStateChanged_Params
{
	EWireTidesMatchState                               NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireTidesMatchState                               LastState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSectionCaptureComponent.OnRep_CurrentSector
struct UWireTidesSectionCaptureComponent_OnRep_CurrentSector_Params
{
};

// Function WireGame.WireTidesSector.SetCurrentSector
struct AWireTidesSector_SetCurrentSector_Params
{
	bool                                               bNewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSector.OnFlagStateChange
struct AWireTidesSector_OnFlagStateChange_Params
{
	class USQCaptureZoneComponent*                     CaptureZone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSector.OnFlagContested
struct AWireTidesSector_OnFlagContested_Params
{
	unsigned char                                      Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSector.GetObjectives
struct AWireTidesSector_GetObjectives_Params
{
	bool                                               bCanBeActivated;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AWireTidesObjective*>                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSector.GetActualOwningTeam
struct AWireTidesSector_GetActualOwningTeam_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSectorWidget.UpdateFrontlineSectors
struct UWireTidesSectorWidget_UpdateFrontlineSectors_Params
{
};

// Function WireGame.WireTidesSectorWidget.GetNMLOwner
struct UWireTidesSectorWidget_GetNMLOwner_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireTidesSectorWidget.AddSectorWidget
struct UWireTidesSectorWidget_AddSectorWidget_Params
{
	class AWireTidesSector*                            NewSector;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireUsableMeshActor.SetOwningTeam
struct AWireUsableMeshActor_SetOwningTeam_Params
{
	ESQTeam                                            NewTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireUsableMeshActor.CanUse
struct AWireUsableMeshActor_CanUse_Params
{
	class AController*                                 InController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireWorldMarker.RemoveMarker
struct AWireWorldMarker_RemoveMarker_Params
{
};

// Function WireGame.WireWorldMarker.GetMarkerTexture
struct AWireWorldMarker_GetMarkerTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireWorldMarker.GetMarkerColor
struct AWireWorldMarker_GetMarkerColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WireGame.WireWorldMarker.DrawMarker
struct AWireWorldMarker_DrawMarker_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
