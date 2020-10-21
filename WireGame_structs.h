#pragma once

// Name: novojogo, Version: 45


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum WireGame.EWireTidesMatchState
enum class EWireTidesMatchState : uint8_t
{
	None                           = 0,
	InPrep                         = 1,
	InProgress                     = 2,
	MAX                            = 3,

};

// Enum WireGame.EWireSteamOnlineStatus
enum class EWireSteamOnlineStatus : uint8_t
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	MAX                            = 6,

};

// Enum WireGame.EWireAnimSignificance
enum class EWireAnimSignificance : uint8_t
{
	Disabled                       = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	VeryHigh                       = 4,
	Epic                           = 5,
	MAX                            = 6,

};

// Enum WireGame.EWireAssaultSpawnGroupType
enum class EWireAssaultSpawnGroupType : uint8_t
{
	Attacker                       = 0,
	Defender                       = 1,
	MAX                            = 2,

};

// Enum WireGame.EWireManualCasingFlags
enum class EWireManualCasingFlags : uint8_t
{
	Bolting                        = 0,
	Reloading                      = 1,
	DryReloading                   = 2,
	MAX                            = 3,

};

// Enum WireGame.EWireMeleeStaminaFlags
enum class EWireMeleeStaminaFlags : uint8_t
{
	Attack                         = 0,
	BlockSuccess                   = 1,
	BlockHold                      = 2,
	BlockStart                     = 3,
	MAX                            = 4,

};

// Enum WireGame.EClassMapPolicy
enum class EClassMapPolicy : uint8_t
{
	NotRouted                      = 0,
	RelevantAll                    = 1,
	Spatialize_Static              = 2,
	Spatialize_Dynamic             = 3,
	Spatialize_Dormancy            = 4,
	MAX                            = 5,

};

// Enum WireGame.EWireRallySectorPlacementFlags
enum class EWireRallySectorPlacementFlags : uint8_t
{
	Neutral                        = 0,
	Friendly                       = 1,
	Enemy                          = 2,
	MAX                            = 3,

};

// Enum WireGame.EWireSteamAvatarSize
enum class EWireSteamAvatarSize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	MAX                            = 3,

};

// Enum WireGame.EWireSteamAsyncCallback
enum class EWireSteamAsyncCallback : uint8_t
{
	OnSuccess                      = 0,
	InProgress                     = 1,
	OnFailure                      = 2,
	MAX                            = 3,

};

// Enum WireGame.EWireGameMatchState
enum class EWireGameMatchState : uint8_t
{
	None                           = 0,
	Preparation                    = 1,
	Playing                        = 2,
	TieBreaker                     = 3,
	MAX                            = 4,

};

// Enum WireGame.EWireMeleeBlockDir
enum class EWireMeleeBlockDir : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	MAX                            = 2,

};

// Enum WireGame.EWireMeleeAttackDir
enum class EWireMeleeAttackDir : uint8_t
{
	OverLeft                       = 0,
	TopLeft                        = 1,
	MidLeft                        = 2,
	LowLeft                        = 3,
	UnderLeft                      = 4,
	OverRight                      = 5,
	TopRight                       = 6,
	MidRight                       = 7,
	LowRight                       = 8,
	UnderRight                     = 9,
	MAX                            = 10,

};

// Enum WireGame.EWirePhaseEndReason
enum class EWirePhaseEndReason : uint8_t
{
	None                           = 0,
	Init                           = 1,
	ObjectiveCaptured              = 2,
	TimeExpired                    = 3,
	TicketsDepleted                = 4,
	MAX                            = 5,

};

// Enum WireGame.EWireWorldMarkerDisplay
enum class EWireWorldMarkerDisplay : uint8_t
{
	All                            = 0,
	Team                           = 1,
	MAX                            = 2,

};

// Enum WireGame.EWireMeleeState
enum class EWireMeleeState : uint8_t
{
	Idle                           = 0,
	Attacking                      = 1,
	Blocking                       = 2,
	Equipping                      = 3,
	Unequipping                    = 4,
	PendingCharge                  = 5,
	Charging                       = 6,
	MAX                            = 7,

};

// Enum WireGame.EWireSquadType
enum class EWireSquadType : uint8_t
{
	Command                        = 0,
	Infantry                       = 1,
	MachineGun                     = 2,
	Recon                          = 3,
	Engineer                       = 4,
	MAX                            = 5,

};

// Enum WireGame.EWireSteamRichPresenceKey
enum class EWireSteamRichPresenceKey : uint8_t
{
	GameState                      = 0,
	ServerName                     = 1,
	TeamName                       = 2,
	MapName                        = 3,
	PlayerCount                    = 4,
	MAX                            = 5,

};

// Enum WireGame.EWireSampleType
enum class EWireSampleType : uint8_t
{
	Sample                         = 0,
	MAX                            = 1,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WireGame.WireMapData
// 0x0068 (0x00A8 - 0x0040)
struct FWireMapData : public FSQMapData
{
	struct FString                                     SetName;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LoadingScreenMoviePaths;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundBase*                                  LoadingMusic;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       GameModeName;                                              // 0x0068(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       GameModeTutorial;                                          // 0x0080(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     GameModeImagePath;                                         // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireMapGameModeData
// 0x0058 (0x0060 - 0x0008)
struct FWireMapGameModeData : public FTableRowBase
{
	struct FText                                       GameModeName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       GameModeDescription;                                       // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       GameModeTutorial;                                          // 0x0038(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     GameModeImagePath;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireAbilityData
// 0x0038 (0x0040 - 0x0008)
struct FWireAbilityData : public FTableRowBase
{
	struct FName                                       DisplayName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Icon[0x28];                                                // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireAbilityData.Icon
	class UClass*                                      AbilityClass;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireMeleeMontages
// 0x0018
struct FWireMeleeMontages
{
	class UAnimMontage*                                Montage_1P;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage_3P;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage_Weapon;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireChunkDependency
// 0x0020
struct FWireChunkDependency
{
	struct FInt32Range                                 ChunkIDs;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ParentChunkIDs;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireCommanderAbilityData
// 0x0008 (0x0048 - 0x0040)
struct FWireCommanderAbilityData : public FWireAbilityData
{
	int                                                Cost;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CategoryIndex;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireCaptureHexData
// 0x0008
struct FWireCaptureHexData
{
	float                                              HexRadius;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CaptureIndex;                                              // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_523V[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireShotInfoMulti
// 0x0030
struct FWireShotInfoMulti
{
	TArray<struct FVector_NetQuantizeNormal>           ShootDirs;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Origin;                                                    // 0x0010(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTime;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PenetrationDamageMultiplier;                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmorDamageMultiplier;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShotCounter;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsTracer : 1;                                             // 0x0029(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2VJ[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.ShotInfoMultiData
// 0x0018
struct FShotInfoMultiData
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                  // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSquadRoleData
// 0x0010
struct FWireSquadRoleData
{
	class USQRoleSettings*                             Role;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Usage;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Limit;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSquadRoleDataGroup
// 0x0010
struct FWireSquadRoleDataGroup
{
	TArray<struct FWireSquadRoleData>                  Datas;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireDevelopmentUpdateData
// 0x0060
struct FWireDevelopmentUpdateData
{
	struct FString                                     Version;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Image;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Date;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Link;                                                      // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireManualReloadConfig
// 0x000C
struct FWireManualReloadConfig
{
	float                                              TacReloadDuration;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryReloadDuration;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDiscardFirstRound : 1;                                    // 0x0008(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFDI[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireSingleRoundMontages
// 0x0030
struct FWireSingleRoundMontages
{
	class UAnimMontage*                                WeaponReloadMontage;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponReloadDryMontage;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pReloadMontage;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier1pReloadDryMontage;                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pReloadMontage;                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Soldier3pReloadDryMontage;                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireMapListItem
// 0x0088
struct FWireMapListItem
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Map[0x28];                                                 // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireMapListItem.Map
	unsigned char                                      Loadingscreen[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireMapListItem.Loadingscreen
	TArray<struct FFilePath>                           LoadingMovies;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPublic)
	class USoundBase*                                  LoadingMusic;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         GameModeData;                                              // 0x0078(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireMeleeReplicatedAttackData
// 0x0003
struct FWireMeleeReplicatedAttackData
{
	EWireMeleeAttackDir                                Direction;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CompressedMouseAngle;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                     // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSoldierBloodSettings
// 0x0008
struct FWireSoldierBloodSettings
{
	float                                              MinSize;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSize;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSoldierModularData
// 0x0038
struct FWireSoldierModularData
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Sets;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeleton*                                   BaseSkeleton;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               UniformMesh;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               UniformMesh1P;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdateSkeletonBeforeMerge : 1;                            // 0x0030(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SY6[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireRepSoldierModularData
// 0x0004
struct FWireRepSoldierModularData
{
	unsigned char                                      SetIndex;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HeadIndex;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HeadMaterialIndex;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HandIndex;                                                 // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSoldierDismembermentLink
// 0x0038
struct FWireSoldierDismembermentLink
{
	unsigned char                                      StumpMeshes[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty WireGame.WireSoldierDismembermentLink.StumpMeshes
	unsigned char                                      LimbMeshes[0x10];                                          // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty WireGame.WireSoldierDismembermentLink.LimbMeshes
	class UWireSoldierDismemberment*                   DismembermentSettings;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StumpSocketName;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireDeployableLimitRule
// 0x0010
struct FWireDeployableLimitRule
{
	class UClass*                                      DeployableType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Limit;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RV3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireSquadSupportMarkerData
// 0x0010
struct FWireSquadSupportMarkerData
{
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SquadId;                                                   // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsActive : 1;                                             // 0x000D(0x0001) BIT_FIELD  (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L94P[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.ShellImpact
// 0x0010
struct FShellImpact
{
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSteamId
// 0x0020
struct FWireSteamId
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6LZ3[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireSteamFriendPresence
// 0x0008
struct FWireSteamFriendPresence
{
	unsigned char                                      bIsOnline : 1;                                             // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPlaying : 1;                                            // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPlayingThisGame : 1;                                    // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsJoinable : 1;                                           // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasVoiceSupport : 1;                                      // 0x0000(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8ZZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EWireSteamOnlineStatus                             OnlineStatus;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FL32[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireSteamFriend
// 0x0048
struct FWireSteamFriend
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RealName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWireSteamId                                SteamId;                                                   // 0x0020(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWireSteamFriendPresence                    Presence;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct WireGame.WireSquadSettings
// 0x0060
struct FWireSquadSettings
{
	TArray<struct FWireDeployableLimitRule>            DeployableLimits;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UWireAbilityRuleset*                         SLAbilityRuleset;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RadialMenuModal;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RadialMenuNoBuildModal;                                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Internal_SquadRoles;                                       // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DisplayIcon;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShortName;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DisplayName;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Limit;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldDisplayIcon : 1;                                    // 0x0058(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30MW[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct WireGame.WireSoldierModularDataRow
// 0x0048 (0x0050 - 0x0008)
struct FWireSoldierModularDataRow : public FTableRowBase
{
	float                                              ChanceRate;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_26AE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USkeletalMesh*>                       HeadMeshes;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>                   HeadMaterials;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               HeadMorphTargets;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                       HandMeshes;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
