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
// Classes
//---------------------------------------------------------------------------

// Class WireGame.WireAbilityRuleset
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UWireAbilityRuleset : public UPrimaryDataAsset
{
public:
	TArray<struct FDataTableRowHandle>                 Abilities;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAbilityRuleset");
		return ptr;
	}


	int GetIndexForAbility(class UClass* Ability);
	TArray<struct FWireAbilityData> GetAbilities();
};

// Class WireGame.WireAbilityScript
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UWireAbilityScript : public UObject
{
public:
	float                                              CooldownTime;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownTimestamp;                                         // 0x002C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireAbilitySystem*                          Owner;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresClientAuth : 1;                                   // 0x0038(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bServerOnly : 1;                                           // 0x0038(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNeedsCooldown : 1;                                        // 0x0038(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R630[0x77];                                    // 0x0039(0x0077) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAbilityScript");
		return ptr;
	}


	class AActor* SpawnActor(class UClass* ActorClass, const struct FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandlingMethod);
	void SendClientAuth(unsigned char AbilityIndex);
	void OnServerExecute();
	void OnServerDestroy();
	void OnClientExecute();
	void OnClientDestroy();
	void OnClientAuth();
	float GetRemainingCooldownTime();
	struct FText GetCantExecuteReason();
	bool CanExecuteAbility();
};

// Class WireGame.WireAbilitySystem
// 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
class AWireAbilitySystem : public AInfo
{
public:
	TArray<class UWireAbilityScript*>                  Abilities;                                                 // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3A9[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQPlayerController*                         PlayerController;                                          // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireAbilityRuleset*                         AbilityRuleset;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireAbilityScript*                          CurrentAbility;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLND[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAbilitySystem");
		return ptr;
	}


	void UseAbility(unsigned char AbilityIndex);
	void ServerUseCommanderAbility(unsigned char AbilityIndex);
	void ServerAuthAbility(unsigned char AbilityIndex);
	class UWireAbilityScript* GetAbilityFromData(const struct FWireAbilityData& AbilityData);
	void DiscardClientAuth();
	void AuthAbility(unsigned char AbilityIndex);
};

// Class WireGame.WireAmmoWidget
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UWireAmmoWidget : public USQUserWidget
{
public:
	class ASQPlayerController*                         PlayerController;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAmmoWidget");
		return ptr;
	}


	void UpdateWidget(class ASQEquipableItem* CurrentWeapon);
	int GetMagazineCount(class ASQEquipableItem* Weapon);
	class ASQEquipableItem* GetCurrentWeapon();
	void ClearWidget();
};

// Class WireGame.WireAnimInstanceCosmetics
// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
class UWireAnimInstanceCosmetics : public UAnimInstance
{
public:
	class AWireSoldier*                                Soldier;                                                   // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireAnimSignificance                              Significance;                                              // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IYGT[0xF];                                     // 0x0271(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAnimInstanceCosmetics");
		return ptr;
	}


};

// Class WireGame.WireAnimInstanceSoldier1P
// 0x0050 (FullSize[0x0D20] - InheritedSize[0x0CD0])
class UWireAnimInstanceSoldier1P : public USQAnimInstanceSoldier1P
{
public:
	class UBlendSpace1D*                               BS1D_LeftSwing_1p;                                         // 0x0CD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightSwing_1p;                                        // 0x0CD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_LeftCombo_1p;                                         // 0x0CE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightCombo_1p;                                        // 0x0CE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AWireMeleeWeapon*                            MeleeWeapon;                                               // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 FocusStaminaInfluenceCurve;                                // 0x0CF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 FocusStaminaMeleeInfluenceCurve;                           // 0x0D00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SwayVerticalFactor;                                        // 0x0D08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SwayHorizontalFactor;                                      // 0x0D0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsMeleeBlocking;                                          // 0x0D10(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsMeleeBlockingOrIsAds;                                   // 0x0D11(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KG4O[0xE];                                     // 0x0D12(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAnimInstanceSoldier1P");
		return ptr;
	}


};

// Class WireGame.WireAnimInstanceSoldier3P
// 0x0080 (FullSize[0x0DB0] - InheritedSize[0x0D30])
class UWireAnimInstanceSoldier3P : public USQAnimInstanceSoldier3P
{
public:
	unsigned char                                      bEnableFootIK : 1;                                         // 0x0D30(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W5CO[0x7];                                     // 0x0D31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpace1D*                               BS1D_LeftSwing_Stand_3p;                                   // 0x0D38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightSwing_Stand_3p;                                  // 0x0D40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_LeftCombo_Stand_3p;                                   // 0x0D48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightCombo_Stand_3p;                                  // 0x0D50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_LeftSwing_Crouch_3p;                                  // 0x0D58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightSwing_Crouch_3p;                                 // 0x0D60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_LeftCombo_Crouch_3p;                                  // 0x0D68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightCombo_Crouch_3p;                                 // 0x0D70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_LeftSwing_Prone_3p;                                   // 0x0D78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightSwing_Prone_3p;                                  // 0x0D80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_LeftCombo_Prone_3p;                                   // 0x0D88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               BS1D_RightCombo_Prone_3p;                                  // 0x0D90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AWireMeleeWeapon*                            MeleeWeapon;                                               // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsUsingMelee;                                             // 0x0DA0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsMeleeBlockingOrIsAds;                                   // 0x0DA1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NM8S[0xE];                                     // 0x0DA2(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAnimInstanceSoldier3P");
		return ptr;
	}


};

// Class WireGame.WireAnimNotify_BulletBranchPoint
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UWireAnimNotify_BulletBranchPoint : public UAnimNotify
{
public:
	struct FName                                       BulletLoopSectionName;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EndSectionName;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAnimNotify_BulletBranchPoint");
		return ptr;
	}


};

// Class WireGame.WireAnimNotify_ManShellEjection
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UWireAnimNotify_ManShellEjection : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAnimNotify_ManShellEjection");
		return ptr;
	}


};

// Class WireGame.WireAreaDamageActor
// 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
class AWireAreaDamageActor : public AActor
{
public:
	float                                              DamageInterval;                                            // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntervalDamageAmount;                                      // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnteredDamageAmount;                                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyEnteredDamage : 1;                                   // 0x0254(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyIntervalDamage : 1;                                  // 0x0254(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFJ1[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageType;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAreaDamageActor");
		return ptr;
	}


};

// Class WireGame.WireCapturePointMapWidget
// 0x0038 (FullSize[0x02D8] - InheritedSize[0x02A0])
class UWireCapturePointMapWidget : public USQMapWidget
{
public:
	unsigned char                                      UnknownData_07SS[0x20];                                    // 0x02A0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DisplayName;                                               // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShortName;                                                 // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureProgress;                                           // 0x02D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OwningTeam;                                                // 0x02D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CapturingTeam;                                             // 0x02D5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9WH[0x2];                                     // 0x02D6(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCapturePointMapWidget");
		return ptr;
	}


	void OnShortNameChanged();
	void OnOwningTeamChanged();
	void OnDisplayNameChanged();
	void OnCapturingTeamChanged();
	void OnCaptureProgressChanged();
	float GetFlagControlValue(int TeamID);
	void GetCapturePointScale(float* SizeX, float* SizeY);
};

// Class WireGame.WireFrontlinesCaptureMapWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UWireFrontlinesCaptureMapWidget : public UWireCapturePointMapWidget
{
public:
	unsigned char                                      bIsFrontline : 1;                                          // 0x02D8(0x0001) BIT_FIELD  (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8FXX[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesCaptureMapWidget");
		return ptr;
	}


	void OnbIsFrontlineChanged();
};

// Class WireGame.WireAssaultCaptureMapWidget
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class UWireAssaultCaptureMapWidget : public UWireFrontlinesCaptureMapWidget
{
public:
	int                                                BoundaryAtlasIndex;                                        // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BoundaryAtlasDivisions;                                    // 0x02E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultCaptureMapWidget");
		return ptr;
	}


	void OnBoundaryAtlasIndexChanged();
};

// Class WireGame.WireCapturePoint
// 0x0090 (FullSize[0x02D8] - InheritedSize[0x0248])
class AWireCapturePoint : public AActor
{
public:
	unsigned char                                      UnknownData_7ME7[0x28];                                    // 0x0248(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ShortName;                                                 // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DisplayName;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USQCoreStateComponent*                       StateComponent;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SceneWidgetClass;                                          // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCaptureRate;                                            // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayerCaptureRate;                                         // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ResetCaptureRate;                                          // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CaptureProgress;                                           // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnOwningTeamChanged;                                       // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCapturingTeamChanged;                                    // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamCaptureRulesChanged;                                 // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      MinimimCaptureThreshold;                                   // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      InitialOwningTeam;                                         // 0x02D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OwningTeam;                                                // 0x02D2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CapturingTeam;                                             // 0x02D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D66F[0x1];                                     // 0x02D4(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TeamCaptureRules;                                          // 0x02D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bResetProgressWhenEmpty : 1;                               // 0x02D6(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsActive : 1;                                             // 0x02D6(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZS3[0x1];                                     // 0x02D7(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCapturePoint");
		return ptr;
	}


	void OnRep_TeamCaptureRules(unsigned char OldState);
	void OnRep_OwningTeam(unsigned char OldState);
	void OnRep_CapturingTeam(unsigned char OldState);
	void OnRep_CaptureProgress(float OldValue);
	bool GetTeamCanCapture(unsigned char TeamID);
	float GetFlagControlValue(unsigned char InTeam);
};

// Class WireGame.WireFrontlinesCapturePoint
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class AWireFrontlinesCapturePoint : public AWireCapturePoint
{
public:
	class UTexture2D*                                  CapturePointMaskTexture;                                   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKYX[0x8];                                     // 0x02E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesCapturePoint");
		return ptr;
	}


	class AWireFrontlinesSector* GetOwningSector();
};

// Class WireGame.WireAssaultCapturePoint
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class AWireAssaultCapturePoint : public AWireFrontlinesCapturePoint
{
public:
	unsigned char                                      bAllowDefenderCapture : 1;                                 // 0x02E8(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6N1[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultCapturePoint");
		return ptr;
	}


};

// Class WireGame.WireGameMode
// 0x0008 (FullSize[0x0730] - InheritedSize[0x0728])
class AWireGameMode : public ASQGameMode
{
public:
	class UClass*                                      NotifyWidgetClass;                                         // 0x0728(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameMode");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesGameMode
// 0x0010 (FullSize[0x0740] - InheritedSize[0x0730])
class AWireFrontlinesGameMode : public AWireGameMode
{
public:
	unsigned char                                      UnknownData_4TBB[0x10];                                    // 0x0730(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesGameMode");
		return ptr;
	}


	void OnGraphLatticeUpdated();
	class AWireBaseRulesetState* GetRulesetState();
	void CreateCaptureMarkers();
};

// Class WireGame.WireAssaultGameMode
// 0x0000 (FullSize[0x0740] - InheritedSize[0x0740])
class AWireAssaultGameMode : public AWireFrontlinesGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultGameMode");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesGraphActor
// 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
class AWireFrontlinesGraphActor : public ASQAASGraph
{
public:
	class UWireFrontlinesGraphInitializer*             GraphInitializer;                                          // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WhistleSoundCue[0x28];                                     // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireFrontlinesGraphActor.WhistleSoundCue
	unsigned char                                      UnknownData_LEGJ[0x10];                                    // 0x02C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGraphUpdated;                                            // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T41O[0x18];                                    // 0x02E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesGraphActor");
		return ptr;
	}


	void SectorStateChanged(class UWireFrontlinesGraphNodeComponent* NodeComponent, unsigned char WinningTeam);
	void MulticastGraphUpdated(class AWireFrontlinesSector* Sector, unsigned char WinningTeam);
	TArray<class AWireFrontlinesSector*> GetAllSectors();
};

// Class WireGame.WireAssaultGraphActor
// 0x0030 (FullSize[0x0330] - InheritedSize[0x0300])
class AWireAssaultGraphActor : public AWireFrontlinesGraphActor
{
public:
	unsigned char                                      CapturePointRendererClass[0x28];                           // 0x0300(0x0028) UNKNOWN PROPERTY: SoftClassProperty WireGame.WireAssaultGraphActor.CapturePointRendererClass
	class AWireCapturePointBoundaryRenderer*           CapturePointRenderer;                                      // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultGraphActor");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesGraphNodeComponent
// 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
class UWireFrontlinesGraphNodeComponent : public USQGraphNodeComponent
{
public:
	struct FScriptMulticastDelegate                    OnSectorStateChanged;                                      // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesGraphNodeComponent");
		return ptr;
	}


	void UpdateCaptureState(class UWireFrontlinesGraphNodeComponent* NodeComponent, unsigned char WinningTeam);
	void OnGraphInitialized();
};

// Class WireGame.WireAssaultGraphNodeComponent
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class UWireAssaultGraphNodeComponent : public UWireFrontlinesGraphNodeComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultGraphNodeComponent");
		return ptr;
	}


};

// Class WireGame.WirePlayableArea
// 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
class AWirePlayableArea : public AActor
{
public:
	float                                              BuffApplyTime;                                             // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AllowedTeam;                                               // 0x024C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5MF1[0x3];                                     // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAllowedTeamChanged;                                      // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CD7M[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WirePlayableArea");
		return ptr;
	}


	void OnRep_AllowedTeam();
	float GetRemainingBuffTime();
};

// Class WireGame.WireFrontlinesPlayableArea
// 0x0060 (FullSize[0x02D0] - InheritedSize[0x0270])
class AWireFrontlinesPlayableArea : public AWirePlayableArea
{
public:
	unsigned char                                      OwningSector[0x28];                                        // 0x0270(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireFrontlinesPlayableArea.OwningSector
	unsigned char                                      PrepBlockingActor[0x28];                                   // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireFrontlinesPlayableArea.PrepBlockingActor
	unsigned char                                      UnknownData_P48T[0x10];                                    // 0x02C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesPlayableArea");
		return ptr;
	}


	void OnSectorStateChanged();
	void OnEnteredPlayingStage();
};

// Class WireGame.WireAssaultPlayableArea
// 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
class AWireAssaultPlayableArea : public AWireFrontlinesPlayableArea
{
public:
	unsigned char                                      UnknownData_PN35[0x8];                                     // 0x02D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultPlayableArea");
		return ptr;
	}


};

// Class WireGame.WireBaseGameRuleset
// 0x0078 (FullSize[0x0328] - InheritedSize[0x02B0])
class AWireBaseGameRuleset : public ASQAASRuleset
{
public:
	float                                              PreparationDuration;                                       // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayingDuration;                                           // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketBleedAmount;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CBYM[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<EWireGameMatchState, struct FText>            MatchStateMessages;                                        // 0x02C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      bIsTieBreaker : 1;                                         // 0x0310(0x0001) BIT_FIELD  (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllSectorsCaptured : 1;                                   // 0x0310(0x0001) BIT_FIELD  (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBZR[0x17];                                    // 0x0311(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireBaseGameRuleset");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesRuleset
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class AWireFrontlinesRuleset : public AWireBaseGameRuleset
{
public:
	float                                              OvertimeDuration;                                          // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxMatchPhases;                                            // 0x032C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UEXI[0x3];                                     // 0x032D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesRuleset");
		return ptr;
	}


};

// Class WireGame.WireAssaultRuleset
// 0x0068 (FullSize[0x0398] - InheritedSize[0x0330])
class AWireAssaultRuleset : public AWireFrontlinesRuleset
{
public:
	float                                              StartingTimelimit;                                         // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SectorCaptureAddTime;                                      // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OvertimeAddTime;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTime;                                                   // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHLG[0x8];                                     // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<EWireGameMatchState, struct FText>            MatchStateMessagesDefenders;                               // 0x0348(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultRuleset");
		return ptr;
	}


};

// Class WireGame.WireBaseRulesetState
// 0x0020 (FullSize[0x0268] - InheritedSize[0x0248])
class AWireBaseRulesetState : public ASQRulesetState
{
public:
	float                                              StateTimestamp;                                            // 0x0248(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireGameMatchState                                MatchState;                                                // 0x024C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A42L[0x1B];                                    // 0x024D(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireBaseRulesetState");
		return ptr;
	}


	void OnRep_MatchState(EWireGameMatchState OldMatchState);
	float GetRemainingPrepTime();
	float GetRemainingMatchTime();
};

// Class WireGame.WireAssaultRulesetState
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class AWireAssaultRulesetState : public AWireBaseRulesetState
{
public:
	float                                              ReplicatedTimePool;                                        // 0x0268(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5PS3[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultRulesetState");
		return ptr;
	}


	unsigned char GetAttackingTeam();
};

// Class WireGame.WireFrontlinesSector
// 0x00E0 (FullSize[0x0328] - InheritedSize[0x0248])
class AWireFrontlinesSector : public AActor
{
public:
	class UWireFrontlinesGraphNodeComponent*           NodeComponent;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCoreStateComponent*                       StateComponent;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SceneWidgetClass;                                          // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GraphActorPtr[0x28];                                       // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireFrontlinesSector.GraphActorPtr
	unsigned char                                      CapturePointPtrs[0x10];                                    // 0x0288(0x0010) UNKNOWN PROPERTY: ArrayProperty WireGame.WireFrontlinesSector.CapturePointPtrs
	struct FName                                       SectorName;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InitialTeam;                                               // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LastOwningTeam;                                            // 0x02A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OwningTeam;                                                // 0x02A2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYXT[0x1];                                     // 0x02A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bIsMainBase : 1;                                           // 0x02A4(0x0001) BIT_FIELD  (Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasBegunPlay : 1;                                         // 0x02A4(0x0001) BIT_FIELD  (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U43H[0x3];                                     // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           TeamCapturabilities;                                       // 0x02A8(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CX4I[0x64];                                    // 0x02AC(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPostSectorStateChanged;                                  // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JM08[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesSector");
		return ptr;
	}


	void OnRep_TeamCapturabilities();
	void OnRep_OwningTeam(unsigned char LastTeam);
	void OnIndexedTeamStatesReplicated();
	float GetSectorCaptureValue(int InTeamId);
	bool GetIsFrontlineSector();
	TArray<class AWireFrontlinesCapturePoint*> GetAllCapturePoints();
};

// Class WireGame.WireAssaultSector
// 0x0068 (FullSize[0x0390] - InheritedSize[0x0328])
class AWireAssaultSector : public AWireFrontlinesSector
{
public:
	unsigned char                                      UnknownData_KRI2[0x68];                                    // 0x0328(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultSector");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesSpawnGroup
// 0x0030 (FullSize[0x0420] - InheritedSize[0x03F0])
class AWireFrontlinesSpawnGroup : public ASQTeamSpawnGroup
{
public:
	unsigned char                                      ParentSectorPtr[0x28];                                     // 0x03F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireFrontlinesSpawnGroup.ParentSectorPtr
	ESQTeam                                            SpawnTeam;                                                 // 0x0418(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W457[0x7];                                     // 0x0419(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesSpawnGroup");
		return ptr;
	}


};

// Class WireGame.WireAssaultSpawnGroup
// 0x0008 (FullSize[0x0428] - InheritedSize[0x0420])
class AWireAssaultSpawnGroup : public AWireFrontlinesSpawnGroup
{
public:
	EWireAssaultSpawnGroupType                         SpawnGroupType;                                            // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9B7L[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssaultSpawnGroup");
		return ptr;
	}


};

// Class WireGame.WireAssetManager
// 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
class UWireAssetManager : public UAssetManager
{
public:
	unsigned char                                      UnknownData_CDCS[0x8];                                     // 0x0438(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireAssetManager");
		return ptr;
	}


};

// Class WireGame.WireBuffManager
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UWireBuffManager : public USQBuffManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireBuffManager");
		return ptr;
	}


};

// Class WireGame.WireCapturePointBoundaryRenderer
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
class AWireCapturePointBoundaryRenderer : public AActor
{
public:
	class USceneCaptureComponent2D*                    CaptureCamera;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        BrushMesh;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RenderScale;                                               // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RenderPaddingPercent;                                      // 0x025C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          BrushMeshMaterial;                                         // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                                 CubeMesh;                                                  // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                                 SphereMesh;                                                // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      BlitterRenderTarget;                                       // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      AtlasRenderTarget;                                         // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          BlittingMaterial;                                          // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    BlittingMaterialDynInst;                                   // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCapturePointBoundaryRenderer");
		return ptr;
	}


};

// Class WireGame.WireCapturePointInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireCapturePointInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCapturePointInterface");
		return ptr;
	}


};

// Class WireGame.WireCapturePointStateData
// 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
class UWireCapturePointStateData : public USQSquadStateMapData
{
public:
	struct FName                                       DisplayName;                                               // 0x0180(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShortName;                                                 // 0x0188(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureProgress;                                           // 0x0190(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OwningTeam;                                                // 0x0194(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CapturingTeam;                                             // 0x0195(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTSU[0x2];                                     // 0x0196(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCapturePointStateData");
		return ptr;
	}


};

// Class WireGame.WireCaptureScoreRuleset
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class AWireCaptureScoreRuleset : public ASQGameRuleSet
{
public:
	unsigned char                                      bNotifyOnCapture : 1;                                      // 0x0270(0x0001) BIT_FIELD  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyOnCapturing : 1;                                    // 0x0270(0x0001) BIT_FIELD  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FFCM[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCaptureScoreRuleset");
		return ptr;
	}


	void PointCapturing(class AWireCapturePoint* CapturePoint);
	void PointCaptured(class AWireCapturePoint* CapturePoint);
	void OnNotifyCapturing(class APlayerController* PC, class AWireCapturePoint* CapturePoint);
	void OnNotifyCaptured(class APlayerController* PC, class AWireCapturePoint* CapturePoint);
};

// Class WireGame.WireChunkSettings
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UWireChunkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      MapsToCook[0x10];                                          // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty WireGame.WireChunkSettings.MapsToCook
	TArray<struct FWireChunkDependency>                Dependencies;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireChunkSettings");
		return ptr;
	}


};

// Class WireGame.WireCommanderAbilityRuleset
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UWireCommanderAbilityRuleset : public UWireAbilityRuleset
{
public:
	int                                                MaxCommandPoints;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CommandPointUpdateFrequency;                               // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PassiveCommandPointAmount;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsPerTeamObjectiveCapture;                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCommanderAbilityRuleset");
		return ptr;
	}


	TArray<struct FWireCommanderAbilityData> GetCommanderAbilities();
};

// Class WireGame.WireCommanderAbilityScript
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UWireCommanderAbilityScript : public UWireAbilityScript
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCommanderAbilityScript");
		return ptr;
	}


};

// Class WireGame.WireCommanderOrderScript
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireCommanderOrderScript : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCommanderOrderScript");
		return ptr;
	}


	int GatherOrderPoints(class AWireCommanderOrderVolume* Owner, TArray<class ASQSoldier*> RelevantSoldiers);
};

// Class WireGame.WireCommanderOrderVolume
// 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
class AWireCommanderOrderVolume : public AActor
{
public:
	TArray<class UClass*>                              OrderScriptClasses;                                        // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UWireCommanderOrderScript*>           OrderScripts;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class USQCoreStateComponent*                       StateComponent;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireCommanderState*                         CommanderState;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CommandPointInterval;                                      // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SquadId;                                                   // 0x027C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsSquadOrder : 1;                                         // 0x027D(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NVDN[0x2];                                     // 0x027E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCommanderOrderVolume");
		return ptr;
	}


	void OnRep_Squad();
};

// Class WireGame.WireCommanderState
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class AWireCommanderState : public AWireAbilitySystem
{
public:
	class AWireTeamState*                              TeamState;                                                 // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommandPoints;                                             // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PA1S[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCommanderState");
		return ptr;
	}


	void ServerDebugAddCommanderPoints(int Points);
	void OnRep_TeamState();
	void AddCommandPointsOnTeamCapturingPoint(class AWireCapturePoint* InPoint);
	void AddCommandPoints(int Points);
};

// Class WireGame.WireCommanderSupport
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
class AWireCommanderSupport : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCommanderSupport");
		return ptr;
	}


};

// Class WireGame.WireCompassMarkerWidget
// 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
class UWireCompassMarkerWidget : public USQCompassMarker
{
public:
	class UTexture2D*                                  MarkerTexture;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireWorldMarker*                            WorldMarker;                                               // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCompassMarkerWidget");
		return ptr;
	}


};

// Class WireGame.WireCompassWidget
// 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
class UWireCompassWidget : public USQCompassMK2
{
public:
	class AWirePlayerController*                       PlayerController;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      WireCompassMarkerClass;                                    // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UWireCompassMarkerWidget*>            TrackedWorldMarkers;                                       // 0x02F8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCompassWidget");
		return ptr;
	}


	void RemoveWorldMarker(class AActor* DestroyedActor);
	void OnNewWorldMarker(class AWireWorldMarker* WorldMarker);
};

// Class WireGame.WireCoreStateSquadItemWidget
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UWireCoreStateSquadItemWidget : public USQCoreStateSquadItemWidget
{
public:
	EWireSquadType                                     SquadType;                                                 // 0x02B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FG0K[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCoreStateSquadItemWidget");
		return ptr;
	}


	void OnSquadTypeChanged();
};

// Class WireGame.WireCoreStateSquadListComponent
// 0x00A0 (FullSize[0x05F0] - InheritedSize[0x0550])
class UWireCoreStateSquadListComponent : public USQCoreStateSquadListComponent
{
public:
	TMap<EWireSquadType, class UPanelWidget*>          SquadTypeRoots;                                            // 0x0550(0x0050) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<EWireSquadType, class UUserWidget*>           SquadTypeSeparators;                                       // 0x05A0(0x0050) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCoreStateSquadListComponent");
		return ptr;
	}


	void SetSquadTypeRootWidgets(TMap<EWireSquadType, class UPanelWidget*> InSquadTypeRoots, TMap<EWireSquadType, class UUserWidget*> Separators);
};

// Class WireGame.WireCuttableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireCuttableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCuttableInterface");
		return ptr;
	}


	bool IsCuttable(class UPrimitiveComponent* PrimComp);
	void CutWireSection(class AWireEquippableCutter* CutterActor, class UPrimitiveComponent* PrimComponent);
};

// Class WireGame.WireCutterStaticInfo
// 0x0030 (FullSize[0x05C0] - InheritedSize[0x0590])
class UWireCutterStaticInfo : public USQItemStaticInfo
{
public:
	class UAnimMontage*                                CutAnimation1p;                                            // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CutAnimation3p;                                            // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CutAnimationWeapon;                                        // 0x05A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CutStopAnimation1p;                                        // 0x05A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CutStopAnimation3p;                                        // 0x05B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CutStopAnimationWeapon;                                    // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireCutterStaticInfo");
		return ptr;
	}


};

// Class WireGame.WireDamageType_Gas
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UWireDamageType_Gas : public USQDamageType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDamageType_Gas");
		return ptr;
	}


};

// Class WireGame.WireDamageType_Melee
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UWireDamageType_Melee : public USQDamageType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDamageType_Melee");
		return ptr;
	}


};

// Class WireGame.WireDeployable
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AWireDeployable : public ASQDeployable
{
public:
	unsigned char                                      UnknownData_CW9K[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDeployable");
		return ptr;
	}


};

// Class WireGame.WireDeployableAmmoBag
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class AWireDeployableAmmoBag : public ASQDeployableAmmoBag
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDeployableAmmoBag");
		return ptr;
	}


	bool CanDisplayPrompt(class AController* Controller);
};

// Class WireGame.WireDeployableRuleset
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class AWireDeployableRuleset : public ASQGameRuleSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDeployableRuleset");
		return ptr;
	}


};

// Class WireGame.WireSplineFenceGenerator
// 0x0080 (FullSize[0x02C8] - InheritedSize[0x0248])
class AWireSplineFenceGenerator : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlignToSurface : 1;                                       // 0x0250(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHGG[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlignTraceHeight;                                          // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 PicketMesh;                                                // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 FenceMesh;                                                 // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 EndFenceMesh;                                              // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StartFenceMesh;                                            // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FenceMeshEndOffset;                                        // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FenceMeshHeightOffset;                                     // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPicketEnableCollision : 1;                                // 0x0280(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C4OH[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<ECollisionEnabled>                     SplineCollisionType;                                       // 0x0284(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H7EG[0x3];                                     // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoTangentLength : 1;                                    // 0x0288(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFirstPicket : 1;                                      // 0x0288(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawLastPicket : 1;                                       // 0x0288(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdateRandomScaleAndYaw : 1;                              // 0x0288(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STOP[0x3];                                     // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PicketYawMin;                                              // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PicketYawMax;                                              // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PicketScaleMin;                                            // 0x0294(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PicketScaleMax;                                            // 0x02A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8QK2[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SplineMeshComponentClass;                                  // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWireFenceMeshComponent*>             SplineMeshComponents;                                      // 0x02B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSplineFenceGenerator");
		return ptr;
	}


};

// Class WireGame.WireDestructibleFence
// 0x0030 (FullSize[0x02F8] - InheritedSize[0x02C8])
class AWireDestructibleFence : public AWireSplineFenceGenerator
{
public:
	float                                              ComponentHealth;                                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadialDamageModifier;                                      // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointDamageModifier;                                       // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4IJ[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ComponentDestroyEmitter;                                   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           DestroyedFlags;                                            // 0x02E0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBAJ[0x14];                                    // 0x02E4(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDestructibleFence");
		return ptr;
	}


	void OnRep_DestroyedFlags();
	void OnComponentDestroyed(class UWireFenceMeshComponent* MeshComp, float DamageAmount, const struct FVector& ImpactPoint, class AController* EventInstigator, class AActor* DamageCauser);
	void MulticastMultiComponentDestroyed(TArray<struct FVector_NetQuantize> ImpactPoints);
	void MulticastComponentDestroyed(const struct FVector& ImpactPoint);
};

// Class WireGame.WireDestructibleBarbed
// 0x0010 (FullSize[0x0308] - InheritedSize[0x02F8])
class AWireDestructibleBarbed : public AWireDestructibleFence
{
public:
	unsigned char                                      UnknownData_ZAPV[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ApplyDamageTickInterval;                                   // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ApplyDamageAmount;                                         // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDestructibleBarbed");
		return ptr;
	}


	void OnCutWireSection(class UWireFenceMeshComponent* MeshComponent);
	void MulticastCutWireSection(int MeshIndex);
};

// Class WireGame.WireDestructibleMeshActor
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class AWireDestructibleMeshActor : public AStaticMeshActor
{
public:
	class USceneComponent*                             DestroyedEmitterLocationComponent;                         // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReplicateHealth : 1;                                      // 0x0260(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5DR[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHealth;                                                 // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Health;                                                    // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsDestroyed : 1;                                          // 0x026C(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEHS[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             DestroyedEmitter;                                          // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDestructibleMeshActor");
		return ptr;
	}


	void UpdateDestroyedVisuals();
	void OnRep_Health(float OldHealth);
	void OnRep_Destroyed();
	void OnHealthChanged(float NewHealth, float OldHealth);
	void OnDestroyedChanged();
};

// Class WireGame.WireDismembermentLimbActor
// 0x0030 (FullSize[0x0288] - InheritedSize[0x0258])
class AWireDismembermentLimbActor : public AStaticMeshActor
{
public:
	class UParticleSystemComponent*                    ParticleComponent;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SimulationStopDuration;                                    // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SimulationStopSpeedThreshold;                              // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3BC[0x20];                                    // 0x0268(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireDismembermentLimbActor");
		return ptr;
	}


	void StopSimulation(bool bInstantDestroy);
	void StartSimulation(class UPrimitiveComponent* ParentComp, const struct FName& BoneName);
};

// Class WireGame.WireEquippableCutter
// 0x0020 (FullSize[0x04B8] - InheritedSize[0x0498])
class AWireEquippableCutter : public ASQEquipableItem
{
public:
	float                                              CutDuration;                                               // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TraceLength;                                               // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetWire;                                                // 0x04A0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PK44[0x10];                                    // 0x04A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireEquippableCutter");
		return ptr;
	}


	void ServerPerformCut(class AActor* InWire);
	void OnRep_TargetWire();
	bool IsCuttingWire();
	float GetRemainingCutTime();
	bool CanUseTool();
};

// Class WireGame.WireFenceMeshComponent
// 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
class UWireFenceMeshComponent : public USplineMeshComponent
{
public:
	unsigned char                                      UnknownData_9O4Q[0x20];                                    // 0x0540(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFenceMeshComponent");
		return ptr;
	}


};

// Class WireGame.WireFlagScoringRuleset
// 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
class AWireFlagScoringRuleset : public ASQFlagScoringRuleset
{
public:
	int                                                FlagCapturedTicketGain;                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagLostTicketLose;                                        // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFlagScoringRuleset");
		return ptr;
	}


};

// Class WireGame.WireFlareProjectile
// 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
class AWireFlareProjectile : public ASQProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFlareProjectile");
		return ptr;
	}


};

// Class WireGame.WireFlareWeapon
// 0x0008 (FullSize[0x0808] - InheritedSize[0x0800])
class AWireFlareWeapon : public ASQInfantryWeapon
{
public:
	class UClass*                                      SupportActorClass;                                         // 0x0800(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFlareWeapon");
		return ptr;
	}


	void ServerSpawnSupportActor(const struct FVector_NetQuantize& Location);
};

// Class WireGame.WireFrontlinesCaptureHex
// 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
class AWireFrontlinesCaptureHex : public AWireFrontlinesCapturePoint
{
public:
	class UStaticMeshComponent*                        HexagonMeshComponent;                                      // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWireCaptureHexData                         CaptureData;                                               // 0x02F0(0x0008) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesCaptureHex");
		return ptr;
	}


	void OnRep_CaptureData();
};

// Class WireGame.WireFrontlinesCaptureStateData
// 0x0008 (FullSize[0x01A0] - InheritedSize[0x0198])
class UWireFrontlinesCaptureStateData : public UWireCapturePointStateData
{
public:
	unsigned char                                      bIsFrontline : 1;                                          // 0x0198(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2XXF[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesCaptureStateData");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesGraphInitializer
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UWireFrontlinesGraphInitializer : public USQGraphInitializerComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesGraphInitializer");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesGraphInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireFrontlinesGraphInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesGraphInterface");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesHexMapWidget
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class UWireFrontlinesHexMapWidget : public UWireFrontlinesCaptureMapWidget
{
public:
	float                                              HexRadius;                                                 // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I6QA[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesHexMapWidget");
		return ptr;
	}


	void OnHexRadiusChanged();
};

// Class WireGame.WireSceneWidget
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UWireSceneWidget : public UUserWidget
{
public:
	struct FVector                                     CachedViewLocation;                                        // 0x0230(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CachedSceneLocation;                                       // 0x023C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MarkerLocation;                                            // 0x0248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BR1C[0x8];                                     // 0x0254(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   MinDistanceSize;                                           // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MaxDistanceSize;                                           // 0x0264(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPE9[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQPlayerController*                         PlayerController;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SceneActor;                                                // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SizeBoxWidget;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlay*                                    ContentOverlayWidget;                                      // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanelSlot*                            CanvasSlot;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationHeightOffset;                                      // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceThreshold;                                      // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistanceThreshold;                                      // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDrawDistance;                                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDrawDistance;                                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B27X : 1;                                      // 0x02AC(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bUseStaticMarkerLocation : 1;                              // 0x02AC(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bScaleSizeByDistance : 1;                                  // 0x02AC(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z6HQ[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSceneWidget");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesHexSceneWidget
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class UWireFrontlinesHexSceneWidget : public UWireSceneWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesHexSceneWidget");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesHexStateData
// 0x0008 (FullSize[0x01A8] - InheritedSize[0x01A0])
class UWireFrontlinesHexStateData : public UWireFrontlinesCaptureStateData
{
public:
	float                                              HexRadius;                                                 // 0x01A0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YODQ[0x4];                                     // 0x01A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesHexStateData");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesRulesetState
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class AWireFrontlinesRulesetState : public AWireBaseRulesetState
{
public:
	unsigned char                                      PhaseCount;                                                // 0x0268(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OS6U[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesRulesetState");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesSectorHex
// 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
class AWireFrontlinesSectorHex : public AWireFrontlinesSector
{
public:
	class USplineComponent*                            HexSplineComponent;                                        // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CaptureHexClass;                                           // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureHexRadius;                                          // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MinHexCount;                                               // 0x033C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8196[0x3];                                     // 0x033D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesSectorHex");
		return ptr;
	}


};

// Class WireGame.WireFrontlinesSectorMapWidget
// 0x0040 (FullSize[0x02E0] - InheritedSize[0x02A0])
class UWireFrontlinesSectorMapWidget : public USQMapWidget
{
public:
	unsigned char                                      UnknownData_QWEW[0x28];                                    // 0x02A0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SectorName;                                                // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  SectorFlag;                                                // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ESQTeam                                            SectorOwningTeam;                                          // 0x02D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4S99[0x3];                                     // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSectorFrontline : 1;                                      // 0x02DC(0x0001) BIT_FIELD  (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E93X[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesSectorMapWidget");
		return ptr;
	}


	void OnSectorOwningTeamChanged();
	void OnSectorNameChanged();
	void OnSectorFrontlineChanged();
	void OnSectorFlagChanged();
	void GetPlayableAreaTransform(float* OffsetX, float* OffsetY, float* SizeX, float* SizeY);
};

// Class WireGame.WireFrontlinesSectorStateData
// 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
class UWireFrontlinesSectorStateData : public USQSquadStateMapData
{
public:
	struct FName                                       SectorName;                                                // 0x0180(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  SectorFlag;                                                // 0x0188(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESQTeam                                            SectorOwningTeam;                                          // 0x0190(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSectorFrontline;                                          // 0x0191(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXA2[0x6];                                     // 0x0192(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireFrontlinesSectorStateData");
		return ptr;
	}


};

// Class WireGame.WireGameInstance
// 0x0090 (FullSize[0x0550] - InheritedSize[0x04C0])
class UWireGameInstance : public USQGameInstance
{
public:
	unsigned char                                      UnknownData_OK0P[0x90];                                    // 0x04C0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameInstance");
		return ptr;
	}


};

// Class WireGame.WireGameNotifyWidget
// 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
class UWireGameNotifyWidget : public USQUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnInit;                                                    // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHide;                                                    // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGM4[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameNotifyWidget");
		return ptr;
	}


	void InitializeNotify(const struct FText& InMessage, const struct FString& InNotifyReason, class UObject* Context, float InDuration);
	void HideNotify(bool bInstant);
};

// Class WireGame.WireGameplayStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameplayStatics");
		return ptr;
	}


	static class AWireTidesRulesetState* STATIC_GetTidesGameplayManager(class UObject* WorldContextObject);
	static class ASQRulesetState* STATIC_GetRulesetState(class UObject* WorldContextObject, class UClass* InClass);
	static void STATIC_ApplyDestructibleFenceRadialDamage(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController);
};

// Class WireGame.WireGameSpawnMobile
// 0x0018 (FullSize[0x03F8] - InheritedSize[0x03E0])
class AWireGameSpawnMobile : public ASQGameSpawn
{
public:
	class AActor*                                      AttachedActor;                                             // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQMapIconComponent*                         GameSpawnMobileMapIcon;                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRegenerateSpawnLocations : 1;                             // 0x03F0(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7JKG[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameSpawnMobile");
		return ptr;
	}


	void AttachToActor(class AActor* Actor, const struct FName& SocketName);
};

// Class WireGame.WireGameSquadSpawn
// 0x0040 (FullSize[0x0438] - InheritedSize[0x03F8])
class AWireGameSquadSpawn : public AWireGameSpawnMobile
{
public:
	unsigned char                                      UnknownData_7BSW[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQSquadState*                               SquadState;                                                // 0x0400(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6WU6[0x30];                                    // 0x0408(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameSquadSpawn");
		return ptr;
	}


	void OnRep_SquadState();
};

// Class WireGame.WireGameSquadSpawnStateData
// 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
class UWireGameSquadSpawnStateData : public USQSquadStateDataSpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameSquadSpawnStateData");
		return ptr;
	}


};

// Class WireGame.WireGameState
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AWireGameState : public ASQGameState
{
public:
	class UWireTickManager*                            WorldTickManager;                                          // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameState");
		return ptr;
	}


};

// Class WireGame.WireGameUserSettings
// 0x0010 (FullSize[0x0408] - InheritedSize[0x03F8])
class UWireGameUserSettings : public USQGameUserSettings
{
public:
	unsigned char                                      bInvertMeleeAxis : 1;                                      // 0x03F8(0x0001) BIT_FIELD  (BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseManualBolting : 1;                                     // 0x03F8(0x0001) BIT_FIELD  (BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N84A[0x3];                                     // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                bUseDepthOfField;                                          // 0x03FC(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           UserSettingsVersion;                                       // 0x0400(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W63M[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameUserSettings");
		return ptr;
	}


	void SetDepthOfFieldAmount(bool inDepthOfField);
	void RequestExit();
	bool GetDepthOfFieldAmount();
};

// Class WireGame.WireGameViewportClient
// 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
class UWireGameViewportClient : public USQGameViewportClient
{
public:
	unsigned char                                      UnknownData_DQWI[0x18];                                    // 0x02F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGameViewportClient");
		return ptr;
	}


};

// Class WireGame.WireGasMask
// 0x0030 (FullSize[0x04C8] - InheritedSize[0x0498])
class AWireGasMask : public ASQEquipableItem
{
public:
	float                                              EquipFadeStartTime;                                        // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnequipFadeStartTime;                                      // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaskEquipShowDuration;                                     // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaskUnequipShowDuration;                                   // 0x04A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PlayerMaskScreenTexture;                                   // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMaskEquipped : 1;                                         // 0x04B0(0x0001) BIT_FIELD  (Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9W0[0x17];                                    // 0x04B1(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGasMask");
		return ptr;
	}


	void ServerMaskEquipped(bool bNewEquipped);
	void OnRep_MaskEquipped();
};

// Class WireGame.WireGasMaskStaticInfo
// 0x0030 (FullSize[0x05C0] - InheritedSize[0x0590])
class UWireGasMaskStaticInfo : public USQItemStaticInfo
{
public:
	class UAnimMontage*                                PutOnMaskMontage;                                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PutOnMaskMontage1P;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PutOnMaskMontage3P;                                        // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                RemoveMaskMontage;                                         // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                RemoveMaskMontage1P;                                       // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                RemoveMaskMontage3P;                                       // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGasMaskStaticInfo");
		return ptr;
	}


};

// Class WireGame.WireGlobals
// 0x0CF8 (FullSize[0x0D20] - InheritedSize[0x0028])
class UWireGlobals : public UObject
{
public:
	unsigned char                                      UnknownData_995H[0xCF8];                                   // 0x0028(0x0CF8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireGlobals");
		return ptr;
	}


};

// Class WireGame.WireHazardInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireHazardInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireHazardInterface");
		return ptr;
	}


};

// Class WireGame.WireHealingEquipableItem
// 0x0000 (FullSize[0x0558] - InheritedSize[0x0558])
class AWireHealingEquipableItem : public ASQFieldDressing
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireHealingEquipableItem");
		return ptr;
	}


};

// Class WireGame.WireHUD
// 0x00D0 (FullSize[0x0A38] - InheritedSize[0x0968])
class AWireHUD : public ASQHUD
{
public:
	struct FScriptMulticastDelegate                    OnOpenChat;                                                // 0x0968(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OKUZ[0xA0];                                    // 0x0978(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                SceneWidgetCanvas;                                         // 0x0A18(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JCAQ[0x18];                                    // 0x0A20(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireHUD");
		return ptr;
	}


	void ToggleReviveWidget(bool bShow);
	void OpenChat(ESQChat Channel);
	void OnFadeToDeathFinished();
	void NotifyBecameWounded();
	void DestroySceneWidget(class AActor* SceneActor);
	void CreateSceneWidget(class AActor* SceneActor, class UClass* WidgetClass, const struct FVector& MarkerLocation, bool bUseStaticLocation);
};

// Class WireGame.WireInfantryWeapon
// 0x0170 (FullSize[0x0970] - InheritedSize[0x0800])
class AWireInfantryWeapon : public ASQInfantryWeapon
{
public:
	unsigned char                                      UnknownData_P7QD[0x10];                                    // 0x0800(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bHasMelee : 1;                                             // 0x0810(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEquipMelee : 1;                                        // 0x0810(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEnvironmentTrace : 1;                                  // 0x0810(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCheckTraceBlocking : 1;                                   // 0x0810(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNPZ[0x3];                                     // 0x0811(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeleeAttackWeight;                                         // 0x0814(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeAttackBaseDamage;                                     // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeChargeBaseDamage;                                     // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MeleeDamageType;                                           // 0x0820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceStartSocketName;                                      // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceEndSocketName;                                        // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceEnvEndSocketName;                                     // 0x0838(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceHalfExtent;                                           // 0x0840(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceHalfExtent3p;                                         // 0x084C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceHalfExtentEnv;                                        // 0x0858(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDamageTraceTime;                                      // 0x0864(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeEquipDuration;                                        // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeUnequipDuration;                                      // 0x086C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeAttackStartTime;                                      // 0x0870(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeAttackDuration;                                       // 0x0874(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeAttackEndDuration;                                    // 0x0878(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeHitPauseDuration;                                     // 0x087C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeChargingUpdateDelay;                                  // 0x0880(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6D5O[0x4];                                     // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MeleeDefaultEffectsClass;                                  // 0x0888(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class USQPhysicalMaterial*, struct FSQProjectileImpactEffect> MeleeSpecificImpactEffects;                                // 0x0890(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      FireBurstCount;                                            // 0x08E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsMeleeEquipped : 1;                                      // 0x08E1(0x0001) BIT_FIELD  (Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J7YY[0x2];                                     // 0x08E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeleeStateTimestamp;                                       // 0x08E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MeleeHitTimestamp;                                         // 0x08E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MeleeChargingUpdateTimestamp;                              // 0x08EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2UN5[0x80];                                    // 0x08F0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireInfantryWeapon");
		return ptr;
	}


	void ServerStopCharging();
	void ServerStartCharging();
	void ServerStartAttacking();
	void ServerNotifyMeleeHit(const struct FHitResult& Hit);
	void ServerFireProjectileMulti(const struct FWireShotInfoMulti& ShotInfo);
	void ServerEquipMelee(bool bEquip);
	void OnRep_IsMeleeEquipped();
	void OnEnteredMeleeState(EWireMeleeState NewState, EWireMeleeState OldState);
	void MulticastStopCharging();
	void MulticastStartCharging();
	void MulticastStartAttacking();
	void MulticastFireProjectileMulti(TArray<struct FShotInfoMultiData> Infos);
	void MulticastEquipMelee(bool bEquip);
	EWireMeleeState GetMeleeState();
	bool CanSwitchWeapon();
};

// Class WireGame.WireInfantryWeaponStaticInfo
// 0x00A8 (FullSize[0x0A98] - InheritedSize[0x09F0])
class UWireInfantryWeaponStaticInfo : public USQWeaponStaticInfo
{
public:
	struct FWireMeleeMontages                          EquipMeleeMontages;                                        // 0x09F0(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          UnequipMeleeMontages;                                      // 0x0A08(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          StartMeleeAttack;                                          // 0x0A20(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          MeleeAttack;                                               // 0x0A38(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          MeleeHit;                                                  // 0x0A50(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          MeleeHitRelease;                                           // 0x0A68(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          MeleeBlocked;                                              // 0x0A80(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireInfantryWeaponStaticInfo");
		return ptr;
	}


};

// Class WireGame.WireInventoryGroupWidget
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UWireInventoryGroupWidget : public USQInventoryGroupWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireInventoryGroupWidget");
		return ptr;
	}


	void OnSelectedChanged(bool bNewState);
	void OnActiveChanged(bool bNewState);
};

// Class WireGame.WireInventoryItemWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UWireInventoryItemWidget : public USQInventoryItemWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireInventoryItemWidget");
		return ptr;
	}


	void OnSelectedChanged(bool bNewState);
	void OnGroupActiveChanged(bool bNewState);
	void OnActiveChanged(bool bNewState);
};

// Class WireGame.WireInventoryWidget
// 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
class UWireInventoryWidget : public USQInventoryWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireInventoryWidget");
		return ptr;
	}


};

// Class WireGame.WireKismetLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireKismetLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireKismetLibrary");
		return ptr;
	}


	static void STATIC_UnregisterSignificanceActor(class AActor* Target);
	static TArray<class AWireFrontlinesSector*> STATIC_SortSectorsByTeam(TArray<class AWireFrontlinesSector*> InSectors, int TeamID);
	static TArray<class AWireTidesSector*> STATIC_SortSectors(TArray<class AWireTidesSector*> InList, bool bLowestFirst, int MaxRange);
	static TArray<class AWireFrontlinesSector*> STATIC_ReverseSectorOrder(TArray<class AWireFrontlinesSector*> InSectors);
	static void STATIC_RegisterSignificanceActor(class AActor* Target, const struct FName& Tag);
	static bool STATIC_IsWithEditor();
	static void STATIC_HideLoadingScreen(class UObject* WorldContext, float FadeDuration);
	static void STATIC_GetSquadRoleData(class ASQPlayerState* PlayerState, TArray<class USQRoleSettings*> Settings, bool bCheckAvalibility, TArray<struct FWireSquadRoleDataGroup>* OutGroups);
	static void STATIC_GetScreenSizeAndDistance(class USceneComponent* InComponent, const struct FVector& ViewLocation, float FOV, float* OutScreenSize, float* OutDistance);
	static struct FString STATIC_GetMapDisplayName(const struct FString& MapPath);
	static TArray<struct FWireDevelopmentUpdateData> STATIC_GetDevelopmentUpdates();
	static struct FWireDevelopmentUpdateData STATIC_GetBuildUpdate();
	static class UWireGameUserSettings* STATIC_GetBTWGameUserSettings();
};

// Class WireGame.WireManualWeapon
// 0x0058 (FullSize[0x09C8] - InheritedSize[0x0970])
class AWireManualWeapon : public AWireInfantryWeapon
{
public:
	float                                              ManualActionDuration;                                      // 0x0970(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ManualActionFireDelayTime;                                 // 0x0974(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWireManualReloadConfig>             ReloadConfigPerRoundsToLoad;                               // 0x0978(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BulletLoadDurations;                                       // 0x0988(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              CancelReloadDuration;                                      // 0x0998(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDryReloadCancelling : 1;                             // 0x099C(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsServerOverrideManualBolting : 1;                        // 0x099C(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bServerForcesManualBolting : 1;                            // 0x099C(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPendingManualAction : 1;                                  // 0x099C(0x0001) BIT_FIELD  (Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KQC[0x3];                                     // 0x099D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShellCasingDelayTime;                                      // 0x09A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShellCasingFlags;                                          // 0x09A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QR8I[0x7];                                     // 0x09A5(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ManualActionStartTime;                                     // 0x09AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CachedManualActionFinishTime;                              // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bWasReloadCanceled : 1;                                    // 0x09B4(0x0001) BIT_FIELD  (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VOF1[0x3];                                     // 0x09B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CancelReloadTimeStamp;                                     // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BIII[0xC];                                     // 0x09BC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireManualWeapon");
		return ptr;
	}


	void ServerManualAction();
	void ServerCancelReload();
	void OnRep_ManualAction();
	void MulticastCancelReload();
};

// Class WireGame.WireManualWeaponStaticInfo
// 0x0040 (FullSize[0x0AD8] - InheritedSize[0x0A98])
class UWireManualWeaponStaticInfo : public UWireInfantryWeaponStaticInfo
{
public:
	TArray<struct FWireSingleRoundMontages>            ReloadMontagePerRoundsToLoad;                              // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ManualActionWeaponMontage;                                 // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ManualAction1pMontage;                                     // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ManualAction3pMontage;                                     // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CancelReloadMontage;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CancelReloadMontage1p;                                     // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CancelReloadMontage3p;                                     // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireManualWeaponStaticInfo");
		return ptr;
	}


};

// Class WireGame.WireMapList
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UWireMapList : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetRules                          Rules;                                                     // 0x0030(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ListName;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Randomizer;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4R1[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DefaultLoadingScreen[0x28];                                // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireMapList.DefaultLoadingScreen
	struct FFilePath                                   DefaultLoadingMovie;                                       // 0x0080(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundBase*                                  DefaultLoadingMusic;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWireMapListItem>                    MapList;                                                   // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireMapList");
		return ptr;
	}


};

// Class WireGame.WireMeleeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireMeleeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireMeleeInterface");
		return ptr;
	}


};

// Class WireGame.WireMeleeWeapon
// 0x01E0 (FullSize[0x0678] - InheritedSize[0x0498])
class AWireMeleeWeapon : public ASQEquipableItem
{
public:
	unsigned char                                      UnknownData_MIHR[0x8];                                     // 0x0498(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttackDuration;                                            // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackStartDuration;                                       // 0x04A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackCancelWindow;                                        // 0x04A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackEndDuration;                                         // 0x04AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PausedBlockedHoldDuration;                                 // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockedStartDuration;                                      // 0x04B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockedDuration;                                           // 0x04B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockedEndDuration;                                        // 0x04BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CounterDuration;                                           // 0x04C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackMeleeWeight;                                         // 0x04C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseBlockTiming : 1;                                       // 0x04C8(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V21R[0x3];                                     // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlockAnimPauseTime;                                        // 0x04CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationBeforeCombo;                                       // 0x04D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceStartSocketName;                                      // 0x04D4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceEndSocketName;                                        // 0x04DC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceEnvEndSocketName;                                     // 0x04E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceHalfExtent;                                           // 0x04EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceHalfExtent3p;                                         // 0x04F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultEffectsClass;                                       // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class USQPhysicalMaterial*, struct FSQProjectileImpactEffect> SpecificImpactEffects;                                     // 0x0518(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      ReceivedDamageShake;                                       // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DealtDamageShake;                                          // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackStaminaCost;                                         // 0x0578(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockStaminaCost;                                          // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockHoldStaminaCost;                                      // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StaminaFlags;                                              // 0x0584(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G2HG[0xF];                                     // 0x0585(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EWireMeleeState                                    MeleeState;                                                // 0x0594(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EWireMeleeState                                    OldMeleeState;                                             // 0x0595(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_755D : 5;                                      // 0x0596(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bPendingCombo : 1;                                         // 0x0596(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      SwingSide;                                                 // 0x0597(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      CachedSwingSide;                                           // 0x0598(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsFirstSwing : 1;                                         // 0x0599(0x0001) BIT_FIELD  (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N4X6[0x2];                                     // 0x059A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MouseAngle;                                                // 0x059C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CachedAnimMouseAngle;                                      // 0x05A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HitTimestamp;                                              // 0x05A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedTimestamp;                                          // 0x05A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StateTimestamp;                                            // 0x05AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StaminaUpdateTimestamp;                                    // 0x05B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1U6V[0xA0];                                    // 0x05B4(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EWireMeleeAttackDir                                AttackDirection;                                           // 0x0654(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AG5K[0x1];                                     // 0x0655(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EWireMeleeBlockDir                                 BlockDirection;                                            // 0x0656(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KNP9[0x1];                                     // 0x0657(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxNetLatencyCompensation;                                 // 0x0658(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultNetLatencyCompensation;                             // 0x065C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NetLatencyCompensation;                                    // 0x0660(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NetLatencyUpdateInterval;                                  // 0x0664(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QI6E[0x10];                                    // 0x0668(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireMeleeWeapon");
		return ptr;
	}


	void ServerStopBlocking();
	void ServerStartBlocking(EWireMeleeBlockDir InBlockDirection);
	void ServerStartAttacking(const struct FWireMeleeReplicatedAttackData& AttackData);
	void ServerNotifyHit(const struct FHitResult& Hit);
	void OnUpdateMouseDelta(float MouseX, float MouseY);
	void OnEnteredState(EWireMeleeState NewState, EWireMeleeState OldState);
	void MulticastStopBlocking();
	void MulticastStartBlocking(EWireMeleeBlockDir InBlockDirection);
	void MulticastStartAttacking(const struct FWireMeleeReplicatedAttackData& AttackData);
	EWireMeleeState GetState();
	EWireMeleeBlockDir GetNewBlockDirection();
};

// Class WireGame.WireMeleeWeaponStaticInfo
// 0x02A0 (FullSize[0x0830] - InheritedSize[0x0590])
class UWireMeleeWeaponStaticInfo : public USQItemStaticInfo
{
public:
	TMap<EWireMeleeAttackDir, struct FWireMeleeMontages> Attacking;                                                 // 0x0590(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          SwingLeftOverFromBottom;                                   // 0x05E0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          SwingLeftUnderFromTop;                                     // 0x05F8(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          SwingRightOverFromBottom;                                  // 0x0610(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWireMeleeMontages                          SwingRightUnderFromTop;                                    // 0x0628(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TMap<EWireMeleeAttackDir, struct FWireMeleeMontages> SwingBlocked;                                              // 0x0640(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<EWireMeleeBlockDir, struct FWireMeleeMontages> StartBlocking;                                             // 0x0690(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<EWireMeleeBlockDir, struct FWireMeleeMontages> EndBlocking;                                               // 0x06E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<EWireMeleeBlockDir, struct FWireMeleeMontages> BlockingHit;                                               // 0x0730(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftSwing_1p;                                         // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightSwing_1p;                                        // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftCombo_1p;                                         // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightCombo_1p;                                        // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftSwing_Stand_3p;                                   // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightSwing_Stand_3p;                                  // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftCombo_Stand_3p;                                   // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightCombo_Stand_3p;                                  // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftSwing_Crouch_3p;                                  // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightSwing_Crouch_3p;                                 // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftCombo_Crouch_3p;                                  // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightCombo_Crouch_3p;                                 // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftSwing_Prone_3p;                                   // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightSwing_Prone_3p;                                  // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_LeftCombo_Prone_3p;                                   // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace1D*                               BS1D_RightCombo_Prone_3p;                                  // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftSwingAnimDuration;                                     // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightSwingAnimDuration;                                    // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftComboAnimDuration;                                     // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightComboAnimDuration;                                    // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreSwingAngleInterpSpeed;                                  // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O6H1[0x4];                                     // 0x0814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                BobbingBlocking1pMontage;                                  // 0x0818(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ComboBlendInTime;                                          // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingBlendInTime;                                          // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockedToIdleBlendTime;                                    // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MWRO[0x4];                                     // 0x082C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireMeleeWeaponStaticInfo");
		return ptr;
	}


};

// Class WireGame.WireMergedSkeletalMesh
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UWireMergedSkeletalMesh : public USkeletalMesh
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireMergedSkeletalMesh");
		return ptr;
	}


};

// Class WireGame.WireMovementInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireMovementInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireMovementInterface");
		return ptr;
	}


	float GetStaminaPenalty(float NativePenalty);
	float GetSlopeModifier(float NativeModifier);
	float GetMovementSpeedModifier();
};

// Class WireGame.WireObjectiveCaptureComponent
// 0x0000 (FullSize[0x01D0] - InheritedSize[0x01D0])
class UWireObjectiveCaptureComponent : public USQCaptureZoneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireObjectiveCaptureComponent");
		return ptr;
	}


};

// Class WireGame.WireObjectiveMapWidget
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class UWireObjectiveMapWidget : public USQMapWidget
{
public:
	class UTexture2D*                                  MapIcon;                                                   // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsActive : 1;                                             // 0x02A8(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsComplete : 1;                                           // 0x02A8(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6QH3[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireObjectiveMapWidget");
		return ptr;
	}


	void OnDataChanged();
};

// Class WireGame.WireObjectiveStateMapData
// 0x0010 (FullSize[0x0190] - InheritedSize[0x0180])
class UWireObjectiveStateMapData : public USQSquadStateMapData
{
public:
	class UTexture2D*                                  MapIcon;                                                   // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsObjectiveActive : 1;                                    // 0x0188(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsObjectiveComplete : 1;                                  // 0x0188(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81ED[0x7];                                     // 0x0189(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireObjectiveStateMapData");
		return ptr;
	}


};

// Class WireGame.WirePawnInventoryComponent
// 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
class UWirePawnInventoryComponent : public USQPawnInventoryComponent
{
public:
	struct FSQInventoryData                            GasMaskData;                                               // 0x02E0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class AWireGasMask*                                GasMaskInstance;                                           // 0x02F8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WirePawnInventoryComponent");
		return ptr;
	}


	void OnRep_GasMask();
};

// Class WireGame.WirePlayerCameraManager
// 0x0020 (FullSize[0x2740] - InheritedSize[0x2720])
class AWirePlayerCameraManager : public ASQPlayerCameraManager
{
public:
	unsigned char                                      UnknownData_QF31[0x4];                                     // 0x2720(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeToDeathDelayTime;                                      // 0x2724(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeToDeathTime;                                           // 0x2728(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeToDeathHoldTime;                                       // 0x272C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5S8Z[0x10];                                    // 0x2730(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WirePlayerCameraManager");
		return ptr;
	}


	void StopFadeToDeath(bool bInstant);
	void StartFadeToDeath(bool bInstant);
};

// Class WireGame.WirePlayerController
// 0x0080 (FullSize[0x09F8] - InheritedSize[0x0978])
class AWirePlayerController : public ASQPlayerController
{
public:
	class UClass*                                      PhasePrepWidgetClass;                                      // 0x0978(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 PhasePrepWidget;                                           // 0x0980(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireGameNotifyWidget*                       CurrentNotifyWidget;                                       // 0x0988(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewMarker;                                               // 0x0990(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamStateChanged;                                        // 0x09A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGiveUpFinished;                                          // 0x09B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AWirePlayableArea*                           PendingBuff;                                               // 0x09C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractTimestamp;                                         // 0x09C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InteractDelay;                                             // 0x09CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GiveUpTime;                                                // 0x09D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSupportPlacementDistance;                               // 0x09D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SLMarkerSpamCooldown;                                      // 0x09D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BE1M[0xC];                                     // 0x09DC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bServerSquadVoIPEnabled : 1;                               // 0x09E8(0x0001) BIT_FIELD  (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_19VW[0x3];                                     // 0x09E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxSLMarkerSpam;                                           // 0x09EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_35BP[0x4];                                     // 0x09F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      UnknownData_TGSX : 3;                                      // 0x09F4(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bIsBeingRevived : 1;                                       // 0x09F4(0x0001) BIT_FIELD  (BlueprintVisible, Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5KAI[0x3];                                     // 0x09F5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WirePlayerController");
		return ptr;
	}


	void TrackMarkerPlaced();
	void ShowPhasePrepWidget(bool bShow);
	void ShowMaskTexture(class UTexture2D* MaskTexture, bool bMaskEquipped);
	class UWireGameNotifyWidget* ShowGameplayNotification(class UClass* WidgetClass, const struct FText& InMessage, const struct FString& InNotifyReason, class UObject* InContext, float InDuration);
	void ServerRequestSupportMarker(const struct FVector_NetQuantize& Location);
	void ServerDestroyRallyPoint();
	bool RequestSupportMarker(struct FText* OutErrorMessage, struct FVector* PlacementLocation);
	void OnRep_BeingRevived();
	void NotifyInEnemyTerritory(bool bNewState);
	float GetInteractProgress();
	float GetGiveUpProgress();
	void DestroyRallyPoint();
	void DebugCrash();
	bool CanPlaceMarker();
};

// Class WireGame.WirePlayerState
// 0x0008 (FullSize[0x0788] - InheritedSize[0x0780])
class AWirePlayerState : public ASQPlayerState
{
public:
	float                                              PingUpdateTimestamp;                                       // 0x0780(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DQ64[0x4];                                     // 0x0784(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WirePlayerState");
		return ptr;
	}


};

// Class WireGame.WireRallyRulesetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireRallyRulesetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireRallyRulesetInterface");
		return ptr;
	}


};

// Class WireGame.WireReplicationGraph
// 0x01A8 (FullSize[0x0640] - InheritedSize[0x0498])
class UWireReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D*  GridSpatializationNode;                                    // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                        // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireReplicationGraphNode_Spectator*         SpectatorRelevancyNode;                                    // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V74O[0x190];                                   // 0x04B0(0x0190) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireReplicationGraph");
		return ptr;
	}


};

// Class WireGame.WireReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0250 (FullSize[0x02A0] - InheritedSize[0x0050])
class UWireReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData_WGW3[0x230];                                   // 0x0050(0x0230) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       LastPawn;                                                  // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASQTeam*                                     TeamInfo;                                                  // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlwaysRelevantActorInfo>            PastRelevantActors;                                        // 0x0290(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}


};

// Class WireGame.WireReplicationGraphNode_PlayerStateFrequencyLimiter
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UWireReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData_RSFF[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireReplicationGraphNode_PlayerStateFrequencyLimiter");
		return ptr;
	}


};

// Class WireGame.WireReplicationGraphNode_AlwaysRelevant_ForTeam
// 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
class UWireReplicationGraphNode_AlwaysRelevant_ForTeam : public UReplicationGraphNode_ActorList
{
public:
	class ASQTeam*                                     TeamInfo;                                                  // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6HOY[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireReplicationGraphNode_AlwaysRelevant_ForTeam");
		return ptr;
	}


};

// Class WireGame.WireReplicationGraphNode_AlwaysRelevant_ForSquad
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class UWireReplicationGraphNode_AlwaysRelevant_ForSquad : public UReplicationGraphNode_ActorList
{
public:
	class ASQSquad*                                    Squad;                                                     // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireReplicationGraphNode_AlwaysRelevant_ForSquad");
		return ptr;
	}


};

// Class WireGame.WireReplicationGraphNode_Spectator
// 0x0098 (FullSize[0x0190] - InheritedSize[0x00F8])
class UWireReplicationGraphNode_Spectator : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData_I7YA[0x98];                                    // 0x00F8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireReplicationGraphNode_Spectator");
		return ptr;
	}


};

// Class WireGame.WireSignificanceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireSignificanceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSignificanceInterface");
		return ptr;
	}


	void HandleSignificance(class UObject* Object, const struct FName& Tag, float OldSignificance, float Significance, bool bFinal);
	float EvaluateSignificance(class UObject* Object, const struct FName& Tag, float CurrentSignificance, const struct FTransform& ViewPoint);
};

// Class WireGame.WireSignificanceManager
// 0x01B8 (FullSize[0x02D0] - InheritedSize[0x0118])
class UWireSignificanceManager : public USignificanceManager
{
public:
	unsigned char                                      UnknownData_6CB5[0x1B8];                                   // 0x0118(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSignificanceManager");
		return ptr;
	}


};

// Class WireGame.WireSLAbilityScript
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UWireSLAbilityScript : public UWireAbilityScript
{
public:
	TArray<class AWireSoldier*>                        AffectedSquadmates;                                        // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int                                                MinSquadSize;                                              // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCharges;                                                // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialCharges;                                            // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentCharges;                                            // 0x00CC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNeedsMinSquadSize : 1;                                    // 0x00D0(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasRange : 1;                                             // 0x00D0(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasCharges : 1;                                           // 0x00D0(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsActive : 1;                                             // 0x00D0(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BW2N[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AbilityRange;                                              // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationTimestamp;                                         // 0x00DC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeCooldownTimer;                                       // 0x00E0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeCooldownTime;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSLAbilityScript");
		return ptr;
	}


	void OnEndAbility();
	void OnAbilityTick(float DeltaTime);
};

// Class WireGame.WireSoldier
// 0x01B0 (FullSize[0x1C30] - InheritedSize[0x1A80])
class AWireSoldier : public ASQSoldierNew
{
public:
	unsigned char                                      UnknownData_W7WN[0x8];                                     // 0x1A80(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      MaskMeshComponent3P;                                       // 0x1A88(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      AttachmentMeshComponent;                                   // 0x1A90(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireAnimInstanceCosmetics*                  AttachmentAnimInstace;                                     // 0x1A98(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGPK[0x10];                                    // 0x1AA0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MaskMeshAttachName;                                        // 0x1AB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastWeaponIndex;                                           // 0x1AB8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SLRespawnMinDistance;                                      // 0x1ABC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SLRespawnMaxDistance;                                      // 0x1AC0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SLRespawnPenalty;                                          // 0x1AC4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Stand1pHeight;                                             // 0x1AC8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MovingCrouch1pHeight;                                      // 0x1ACC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IdleCrouch1pHeight;                                        // 0x1AD0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Prone1pHeight;                                             // 0x1AD4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Climbing1pHeight;                                          // 0x1AD8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Linear1pHeightInterpSpeed;                                 // 0x1ADC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Smooth1pHeightInterpSpeed;                                 // 0x1AE0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0AVB[0x4];                                     // 0x1AE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerIsRevived;                                         // 0x1AE8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bHasMaskEquipped : 1;                                      // 0x1AF8(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DLVR[0x7];                                     // 0x1AF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  SoldierMaskTexture;                                        // 0x1B00(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FC74[0xC];                                     // 0x1B08(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SLDamageTakenModifier;                                     // 0x1B14(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxBloodSplatters;                                         // 0x1B18(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02VH[0x7];                                     // 0x1B19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceConstant*>           BloodMaterials;                                            // 0x1B20(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FWireSoldierBloodSettings> BloodBoneSettings;                                         // 0x1B30(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableCustomization : 1;                                  // 0x1B80(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SLZP[0x7];                                     // 0x1B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWireSoldierModularData                     ModularCustomizationData;                                  // 0x1B88(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWireRepSoldierModularData                  ReplicatedCustomization;                                   // 0x1BC0(0x0004) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XUDK[0x4];                                     // 0x1BC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWireSoldierDismembermentLink>       LeftArmDismembermentLinks;                                 // 0x1BC8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FWireSoldierDismembermentLink>       RightArmDismembermentLinks;                                // 0x1BD8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FWireSoldierDismembermentLink>       LeftLegDismembermentLinks;                                 // 0x1BE8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FWireSoldierDismembermentLink>       RightLegDismembermentLinks;                                // 0x1BF8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      DismembermentLimbActorClass;                               // 0x1C08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           DismembermentFlags;                                        // 0x1C10(0x0002) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTN8[0x16];                                    // 0x1C12(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RespawnDistanceModifier;                                   // 0x1C28(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RespawnDistanceToSL;                                       // 0x1C2C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSoldier");
		return ptr;
	}


	void SpawnHitBloodSplatter(class ASQProjectile* Projectile, const struct FVector& ShotDirection, const struct FVector& HitLocation);
	void SpawnHitBlood(float Damage, const struct FVector& ShotDirection, const struct FHitResult& Hit);
	void SetWireSlowdown(bool bNewState);
	void SetWaterSlowdown(bool bNewState);
	void SetFocus(bool bNewFocus);
	void PlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void OnRep_ReplicatedCustomization();
	void OnRep_DismembermentFlags();
	float GetNormalizedInteractProgress();
};

// Class WireGame.WireSoldierDecalComponent
// 0x0068 (FullSize[0x02C0] - InheritedSize[0x0258])
class UWireSoldierDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      AutoAttachTo[0x28];                                        // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WireGame.WireSoldierDecalComponent.AutoAttachTo
	struct FTransform                                  AutoAttachTransform;                                       // 0x0280(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AutoAttachBoneName;                                        // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSignificance;                                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QXN4[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSoldierDecalComponent");
		return ptr;
	}


};

// Class WireGame.WireSoldierDismemberment
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UWireSoldierDismemberment : public UDataAsset
{
public:
	class UParticleSystem*                             StumpBloodEmitter;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageThreshold;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadialDamageRadius;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadialDamageRadius;                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadialDismembermentChance;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSoldierDismemberment");
		return ptr;
	}


};

// Class WireGame.WireSoldierMovement
// 0x0030 (FullSize[0x08B0] - InheritedSize[0x0880])
class UWireSoldierMovement : public USQSoldierMovement
{
public:
	unsigned char                                      UnknownData_7G0P[0x4];                                     // 0x0880(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusPenalty;                                              // 0x0884(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FindFloorUpdateRate;                                       // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FindFloorFrameCount;                                       // 0x088C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWireSlowdown : 1;                                         // 0x0890(0x0001) BIT_FIELD  (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWaterSlowdown : 1;                                        // 0x0890(0x0001) BIT_FIELD  (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RAXF[0x7];                                     // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecentlyUncrouchedThreshold;                               // 0x0898(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SLSpeedModifier;                                           // 0x089C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SLStaminaModifier;                                         // 0x08A0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KQU[0xC];                                     // 0x08A4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSoldierMovement");
		return ptr;
	}


};

// Class WireGame.WireSoldierRagdollComponent
// 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
class UWireSoldierRagdollComponent : public USQSoldierRagdollComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSoldierRagdollComponent");
		return ptr;
	}


};

// Class WireGame.WireSquad
// 0x0018 (FullSize[0x06C8] - InheritedSize[0x06B0])
class AWireSquad : public ASQSquad
{
public:
	unsigned char                                      UnknownData_FBD5[0x18];                                    // 0x06B0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquad");
		return ptr;
	}


	EWireSquadType GetSquadType();
};

// Class WireGame.WireSquadRallyPoint
// 0x0010 (FullSize[0x0430] - InheritedSize[0x0420])
class AWireSquadRallyPoint : public ASQSquadRallyPoint
{
public:
	unsigned char                                      UnknownData_MCSR[0x10];                                    // 0x0420(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadRallyPoint");
		return ptr;
	}


	void OnPlayableAreaTeamChanged(class AWirePlayableArea* InArea);
};

// Class WireGame.WireSquadRallySpawnRuleset
// 0x0048 (FullSize[0x02B8] - InheritedSize[0x0270])
class AWireSquadRallySpawnRuleset : public ASQGameRuleSet
{
public:
	struct FText                                       ObjectiveTooCloseMessage;                                  // 0x0270(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       SectorNotAllowedMessage;                                   // 0x0288(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      SectorPlacementFlags;                                      // 0x02A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XKC[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObjectiveMinPlacementDistance;                             // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObjectiveTooCloseTimeSubtract;                             // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SectorInvalidTimeSubtract;                                 // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowObjectivePlacement : 1;                              // 0x02B0(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EUWB[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadRallySpawnRuleset");
		return ptr;
	}


};

// Class WireGame.WireSquadSpawnRuleset
// 0x0018 (FullSize[0x0288] - InheritedSize[0x0270])
class AWireSquadSpawnRuleset : public ASQGameRuleSet
{
public:
	unsigned char                                      bAllowSpawningNearEnemies : 1;                             // 0x0270(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpawningInEnemyTerritory : 1;                        // 0x0270(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpawningInEnemyCapturePoints : 1;                    // 0x0270(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2FNH[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NearbyEnemyCheckRadius;                                    // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateDistanceThreshold;                                   // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateTimeThreshold;                                       // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SquadSpawnClass;                                           // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadSpawnRuleset");
		return ptr;
	}


};

// Class WireGame.WireSquadState
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
class AWireSquadState : public ASQSquadState
{
public:
	EWireSquadType                                     SquadType;                                                 // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOZK[0xB];                                     // 0x0329(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           bCanDeploy;                                                // 0x0334(0x0002) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FI07[0x2];                                     // 0x0336(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWireDeployableLimitRule>            DeployableCounts;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class AWireDeployable*>                     ActiveDeployables;                                         // 0x0348(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AWireAbilitySystem*                          SquadLeaderAbilitySystem;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SLAbilityCantExecuteReason;                                // 0x0360(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadState");
		return ptr;
	}


	void UseSLAbility(class ASQPlayerState* Player, unsigned char AbilityIndex);
	void UseDeployable(class AWireDeployable* InDeployable);
	void ReleaseDeployable(class AWireDeployable* InDeployable);
	void OnRep_SquadType();
	class UWireAbilityRuleset* GetSLAbilityRuleset();
	struct FText GetCantUseSLAbilityReason();
	void DestroyOldestDeployable();
	bool CanUseSLAbility(class ASQPlayerState* Player, unsigned char AbilityIndex);
	bool CanDeploy(class UClass* InDeployableType);
};

// Class WireGame.WireSquadStateDataSquadState
// 0x0008 (FullSize[0x0148] - InheritedSize[0x0140])
class UWireSquadStateDataSquadState : public USQSquadStateDataSquadState
{
public:
	EWireSquadType                                     SquadType;                                                 // 0x0140(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5GXK[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadStateDataSquadState");
		return ptr;
	}


};

// Class WireGame.WireSquadStatePrivate
// 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
class AWireSquadStatePrivate : public ASQSquadStatePrivateToTeam
{
public:
	struct FWireSquadSupportMarkerData                 SupportMarkerData;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, Net, Transient, EditConst, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      SupportMarkerWidgetClass;                                  // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USQCoreStateComponent*                       SupportMarkerStateComponent;                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadStatePrivate");
		return ptr;
	}


	void OnRep_SupportMarkerData();
};

// Class WireGame.WireSquadSupportActor
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
class AWireSquadSupportActor : public AActor
{
public:
	class USceneComponent*                             DummyComponent;                                            // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireSquadStatePrivate*                      SquadState;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialDelay;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SupportDuration;                                           // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SalvoDelay;                                                // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SupportNumRounds;                                          // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SupportNumSalvos;                                          // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSalvo : 1;                                             // 0x026C(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseFireDuration : 1;                                      // 0x026C(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RFMJ[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RoundsIntervalMin;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RoundsIntervalMax;                                         // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SupportDispersion;                                         // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OPN[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeClass;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9ZT[0x10];                                    // 0x0288(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadSupportActor");
		return ptr;
	}


	struct FVector GetRoundLocation();
	float GetRoundInterval();
};

// Class WireGame.WireSquadSupportArtillery
// 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
class AWireSquadSupportArtillery : public AWireSquadSupportActor
{
public:
	unsigned char                                      bExplosiveDamage : 1;                                      // 0x0298(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQNY[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxExplosiveDamage;                                        // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillZoneRadius;                                            // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplosiveInnerRadius;                                      // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplosiveRadius;                                           // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKY7[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   ExplodeCue;                                                // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   IncommingCue;                                              // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncomingTimeOffset;                                        // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncomingZDistance;                                         // 0x02C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ExplodeEmitter;                                            // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ExplodeShockwave;                                          // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FShellImpact>                        ShellImpacts;                                              // 0x02D8(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MHMV[0x10];                                    // 0x02E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSquadSupportArtillery");
		return ptr;
	}


	void SpawnExplodeEffects(const struct FVector& Location);
	void ServerExplode(const struct FVector& Location);
	void PlayIncomingSound(const struct FVector& Location);
	float GetSupportEndTime(float ShellTotalDuration);
};

// Class WireGame.WireStaticPhysicsActor
// 0x0030 (FullSize[0x0278] - InheritedSize[0x0248])
class AWireStaticPhysicsActor : public AActor
{
public:
	float                                              SimulateTimeRangeMin;                                      // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SimulateTimeRangeMax;                                      // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ImpulseMin;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ImpulseMax;                                                // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ProjectileHitImpulse;                                      // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSimulationDistance;                                     // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                         PhysicsComponent;                                          // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6NG8[0x10];                                    // 0x0268(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireStaticPhysicsActor");
		return ptr;
	}


};

// Class WireGame.WireSteamBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireSteamBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSteamBlueprintLibrary");
		return ptr;
	}


	static TArray<struct FWireSteamFriend> STATIC_SortSteamFriends(TArray<struct FWireSteamFriend> InFriends);
	static void STATIC_OpenSteamUserProfile(const struct FWireSteamId& SteamId);
	static bool STATIC_GetSteamOnlineStatus(EWireSteamOnlineStatus* OutStatus);
	static bool STATIC_GetSteamId(class APlayerState* PlayerState, struct FWireSteamId* OutSteamId);
	static bool STATIC_GetSteamFriendsList(class APlayerController* PC, TArray<struct FWireSteamFriend>* OutFriends);
	static struct FString STATIC_GetSteamFriendRichPresence(const struct FWireSteamId& SteamId, const struct FString& PresenceKey);
	static class UTexture2D* STATIC_GetSteamFriendAvatar(const struct FWireSteamId& FriendSteamId, EWireSteamAvatarSize AvatarSize, EWireSteamAsyncCallback* AsyncResult);
	static bool STATIC_GetSteamFriend(class APlayerController* PC, const struct FWireSteamId& FriendSteamId, struct FWireSteamFriend* OutFriend);
};

// Class WireGame.WireSteamFriendsCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UWireSteamFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8MKF[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSteamFriendsCallbackProxy");
		return ptr;
	}


	static class UWireSteamFriendsCallbackProxy* STATIC_GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PC);
};

// Class WireGame.WireSupportMarkerMapWidget
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class UWireSupportMarkerMapWidget : public USQMapWidget
{
public:
	unsigned char                                      UnknownData_SHIP[0xC];                                     // 0x02A0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SquadId;                                                   // 0x02AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsActive : 1;                                             // 0x02AD(0x0001) BIT_FIELD  (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_294B[0x2];                                     // 0x02AE(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSupportMarkerMapWidget");
		return ptr;
	}


	void OnSquadIdChanged();
	void OnIsActiveChanged();
	ESlateVisibility GetMarkerVisiblity();
};

// Class WireGame.WireSupportMarkerStateData
// 0x0008 (FullSize[0x0188] - InheritedSize[0x0180])
class UWireSupportMarkerStateData : public USQSquadStateMapData
{
public:
	unsigned char                                      bIsActive : 1;                                             // 0x0180(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L7CK[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireSupportMarkerStateData");
		return ptr;
	}


};

// Class WireGame.WireTeam
// 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
class AWireTeam : public ASQTeam
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTeam");
		return ptr;
	}


};

// Class WireGame.WireTeamInfo
// 0x0070 (FullSize[0x0158] - InheritedSize[0x00E8])
class UWireTeamInfo : public USQTeamInfo
{
public:
	class UClass*                                      DefaultRadialMenuModal;                                    // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CommanderStateClass;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Internal_DefaultTeamRoles;                                 // 0x00F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<EWireSquadType, struct FWireSquadSettings>    SquadSettings;                                             // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTeamInfo");
		return ptr;
	}


	TArray<class USQRoleSettings*> GetSquadRoles(EWireSquadType InSquadType);
	class UClass* GetRadialModal(class ASQPlayerState* PlayerState, bool bCanBuild);
	TArray<class USQRoleSettings*> GetDefaultRoles();
};

// Class WireGame.WireTeamSpawnGroup
// 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
class AWireTeamSpawnGroup : public ASQTeamSpawnGroup
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTeamSpawnGroup");
		return ptr;
	}


};

// Class WireGame.WireTeamSpawnPoint
// 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
class AWireTeamSpawnPoint : public ASQTeamSpawnPoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTeamSpawnPoint");
		return ptr;
	}


};

// Class WireGame.WireTeamState
// 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
class AWireTeamState : public ASQTeamState
{
public:
	class ASQPlayerState*                              CommanderPlayerState;                                      // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireCommanderState*                         WireCommanderState;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTeamState");
		return ptr;
	}


	void OnNewCommander(class ASQSquad* Squad, class ASQPlayerController* PC);
	void OnCommandSquadDestroyed(class AWireSquadState* CommandSquad);
	bool HasSquadType(EWireSquadType SquadType);
	bool HasSquadRole(class USQRoleSettings* RoleSetting, EWireSquadType SquadType);
	int GetSquadTotal(EWireSquadType InSquadType);
	int GetSquadNum(EWireSquadType InSquadType);
};

// Class WireGame.WireTickManager
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UWireTickManager : public UObject
{
public:
	unsigned char                                      UnknownData_IRQY[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bCreateOnServer : 1;                                       // 0x0078(0x0001) BIT_FIELD  (Config, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x0078(0x0001) BIT_FIELD  (Config, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J6I0[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTickManager");
		return ptr;
	}


};

// Class WireGame.WireTidesObjective
// 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
class AWireTidesObjective : public AActor
{
public:
	unsigned char                                      UnknownData_0YTE[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USQCoreStateComponent*                       StateComponent;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsObjectiveActive : 1;                                    // 0x0258(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsObjectiveComplete : 1;                                  // 0x0258(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q59A[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ObjectiveMarkerClass;                                      // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AWireWorldMarker*                            ObjectiveMarker;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesObjective");
		return ptr;
	}


	void OnRep_IsObjectiveComplete();
	void OnRep_IsObjectiveActive();
	void OnObjectiveComplete(class UObject* Context);
	void OnObjectiveActiveChanged();
	void OnClientObjectiveCompleteChanged();
	void OnClientObjectiveActiveChanged();
	void GetObjectiveMarkerDisplay(bool* bDisplayToAll, unsigned char* OutTeam);
};

// Class WireGame.WireTidesCaptureObjective
// 0x0018 (FullSize[0x0288] - InheritedSize[0x0270])
class AWireTidesCaptureObjective : public AWireTidesObjective
{
public:
	class USceneComponent*                             DummyComponent;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireObjectiveCaptureComponent*              CaptureComponent;                                          // 0x0278(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyOnCompleted : 1;                                   // 0x0280(0x0001) BIT_FIELD  (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GDZ[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesCaptureObjective");
		return ptr;
	}


	void OnCaptureStateChanged(class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
	bool CanTeamCapture(unsigned char Team);
};

// Class WireGame.WireTidesCaptureObjectiveRuleset
// 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
class AWireTidesCaptureObjectiveRuleset : public ASQFlagScoringRuleset
{
public:
	int                                                TicketsGainOnCapture;                                      // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLossOnCapture;                                      // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesCaptureObjectiveRuleset");
		return ptr;
	}


	void OnCaptureStateChanged(class AWireTidesCaptureObjective* Objective, class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
};

// Class WireGame.WireTidesDestroyObjective
// 0x0038 (FullSize[0x02A8] - InheritedSize[0x0270])
class AWireTidesDestroyObjective : public AWireTidesObjective
{
public:
	struct FName                                       ObjectiveName;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Health;                                                    // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsNeutralOwner : 1;                                       // 0x027C(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0F7[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              AllowedDamageTypes;                                        // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      bUseDestroyedMesh : 1;                                     // 0x0290(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYRN[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DestroyedLifetime;                                         // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DestroyedEmitter;                                          // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DestroyedSound;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesDestroyObjective");
		return ptr;
	}


	class UMeshComponent* GetMesh();
	class UMeshComponent* GetDestroyedMesh();
	void AllPlayDamageEffects(class UClass* DamageClass);
};

// Class WireGame.WireTidesDestroyObjectiveRuleset
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class AWireTidesDestroyObjectiveRuleset : public ASQGameRuleSet
{
public:
	int                                                TicketsGainOnNeutralDestroy;                               // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLossOnNeutralDestroy;                               // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsGainOnDestroy;                                      // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsLossOnDestroy;                                      // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesDestroyObjectiveRuleset");
		return ptr;
	}


	void OnObjectiveDestroyed(class AWireTidesDestroyObjective* Objective, class AController* EventInstigator);
};

// Class WireGame.WireTidesFlagStatusWidget
// 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
class UWireTidesFlagStatusWidget : public UUserWidget
{
public:
	class UTexture2D*                                  ProgressBarInactiveFriendlyStyle;                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ProgressBarInactiveEnemyStyle;                             // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ProgressBarActiveStyle;                                    // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FriendlyColor;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                EnemyColor;                                                // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NeutralColor;                                              // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActiveAlpha;                                               // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InactiveAlpha;                                             // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireTidesSector*                            Sector;                                                    // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireTidesRulesetState*                      GameplayManager;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWirePlayerController*                       PlayerController;                                          // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesFlagStatusWidget");
		return ptr;
	}


	void InitWidget(class AWireTidesSector* InSector);
	float GetFlagProgressPercent();
	struct FProgressBarStyle GetFlagProgressBarStyle();
	class UProgressBar* GetFlagProgressBar();
};

// Class WireGame.WireTidesGameMode
// 0x0008 (FullSize[0x0738] - InheritedSize[0x0730])
class AWireTidesGameMode : public AWireGameMode
{
public:
	unsigned char                                      UnknownData_6P5O[0x8];                                     // 0x0730(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesGameMode");
		return ptr;
	}


	class AWireTidesRulesetState* GetGameplayManager();
};

// Class WireGame.WireTidesGraph
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class AWireTidesGraph : public ASQAASGraph
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesGraph");
		return ptr;
	}


};

// Class WireGame.WireTidesMapWidgetCaptureZone
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UWireTidesMapWidgetCaptureZone : public USQMapWidgetCaptureZone
{
public:
	unsigned char                                      bIsCurrentSector : 1;                                      // 0x02D8(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8HUQ[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesMapWidgetCaptureZone");
		return ptr;
	}


	void UpdateCurrentSector();
};

// Class WireGame.WireTidesObjectiveInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWireTidesObjectiveInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesObjectiveInterface");
		return ptr;
	}


};

// Class WireGame.WireTidesObjectivePlayerSpawn
// 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
class AWireTidesObjectivePlayerSpawn : public ASQTeamSpawnGroup
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesObjectivePlayerSpawn");
		return ptr;
	}


};

// Class WireGame.WireTidesPlayableArea
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class AWireTidesPlayableArea : public AWirePlayableArea
{
public:
	class AWireTidesSector*                            OwningSector;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNMLArea : 1;                                              // 0x0278(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5V5V[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesPlayableArea");
		return ptr;
	}


	void TidesStateChanged(EWireTidesMatchState NewState, EWireTidesMatchState LastState);
};

// Class WireGame.WireTidesRuleset
// 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
class AWireTidesRuleset : public ASQAASRuleset
{
public:
	unsigned char                                      RequiredPhaseWins;                                         // 0x02B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9SYE[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PhaseTimeLimit;                                            // 0x02B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhasePrepTime;                                             // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ObjectivesPerSector;                                       // 0x02BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NotifyMarkerClass;                                         // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FallbackMarkerClass;                                       // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PZUP[0x8];                                     // 0x02D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesRuleset");
		return ptr;
	}


};

// Class WireGame.WireTidesRulesetState
// 0x0138 (FullSize[0x0380] - InheritedSize[0x0248])
class AWireTidesRulesetState : public ASQRulesetState
{
public:
	unsigned char                                      AttackingTeam;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamOnePhaseWins;                                          // 0x0249(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamTwoPhaseWins;                                          // 0x024A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXRR[0x1];                                     // 0x024B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttackingStartingTickets;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWireTidesMatchState                               TidesState;                                                // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSGV[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PhaseStartTimeStamp;                                       // 0x0254(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PrepStartTimeStamp;                                        // 0x0258(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O43L[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASQAASGraph*                                 GraphActor;                                                // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AWireTidesSector*>                    Sectors;                                                   // 0x0268(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3EFJ[0x18];                                    // 0x0278(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    UpdateFrontlineSectors;                                    // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPhaseEnded;                                              // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTidesStateChanged;                                       // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AWireWorldSettings*                          WorldSettings;                                             // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LSFL[0x68];                                    // 0x02C8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AWireWorldMarker*>                    CurrentMarkers;                                            // 0x0330(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AWireTidesSector*                            CurrentSector;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KRZW[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      NotifyWidgetClass;                                         // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BAS2[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNewWinningTeam;                                          // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClass*                                      NotifyMarkerClass;                                         // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FallbackMarkerClass;                                       // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesRulesetState");
		return ptr;
	}


	void OnSectorStateChanged(class AWireTidesSector* Sector, class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
	void OnSectorFrontline(class AWireTidesSector* Sector);
	void OnSectorContested(class AWireTidesSector* Sector, unsigned char ContestingTeam);
	void OnRep_TidesState(EWireTidesMatchState LastTidesState);
	void OnObjectiveCompleted(class AWireTidesObjective* Objective, class UObject* Context);
	void MulticastSectorContested(class AWireTidesSector* Sector, unsigned char ContestingTeam);
	void MulticastPhaseStarted(class AWireTidesSector* Sector, class AWireTidesSector* OtherSector);
	void MulticastPhaseEnded(class AWireTidesSector* Sector, unsigned char WinningTeam, EWirePhaseEndReason EndReason);
	void MulticastObjectiveCompleted(class AWireTidesObjective* Objective, class UObject* Context);
	unsigned char GetTeamPhaseWins(unsigned char TeamID);
	float GetRemainingPrepTime();
	float GetRemainingPhaseTime();
	float GetElapsedPrepTime();
	float GetElapsedPhaseTime();
};

// Class WireGame.WireTidesSectionCaptureComponent
// 0x0048 (FullSize[0x0218] - InheritedSize[0x01D0])
class UWireTidesSectionCaptureComponent : public USQCaptureZoneComponent
{
public:
	struct FText                                       FlagShortName;                                             // 0x01D0(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                FlagIndex;                                                 // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCP5[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    NotifyContested;                                           // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bIsCurrentSector : 1;                                      // 0x0200(0x0001) BIT_FIELD  (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CI0L[0x7];                                     // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AWireTidesSector*                            OwningSector;                                              // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CDN[0x8];                                     // 0x0210(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesSectionCaptureComponent");
		return ptr;
	}


	void OnTidesStateChanged(EWireTidesMatchState NewState, EWireTidesMatchState LastState);
	void OnRep_CurrentSector();
};

// Class WireGame.WireTidesSector
// 0x00A8 (FullSize[0x02F0] - InheritedSize[0x0248])
class AWireTidesSector : public AActor
{
public:
	class USplineComponent*                            OutlineComponent;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWireTidesSectionCaptureComponent*           CaptureComponent;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MapSectorMask;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKHE[0x30];                                    // 0x0260(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActualOwningTeam;                                          // 0x0290(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YNLK[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   WhistleSoundCue;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ULEP[0x50];                                    // 0x02A0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesSector");
		return ptr;
	}


	void SetCurrentSector(bool bNewState);
	void OnFlagStateChange(class USQCaptureZoneComponent* CaptureZone, unsigned char Team);
	void OnFlagContested(unsigned char Team);
	TArray<class AWireTidesObjective*> GetObjectives(bool bCanBeActivated);
	unsigned char GetActualOwningTeam();
};

// Class WireGame.WireTidesSectorWidget
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UWireTidesSectorWidget : public USQUserWidget
{
public:
	class AWireTidesRulesetState*                      RuleSet;                                                   // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_84QL[0x10];                                    // 0x0238(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesSectorWidget");
		return ptr;
	}


	void UpdateFrontlineSectors();
	unsigned char GetNMLOwner();
	void AddSectorWidget(class AWireTidesSector* NewSector);
};

// Class WireGame.WireTidesSpawnGroup
// 0x0020 (FullSize[0x0410] - InheritedSize[0x03F0])
class AWireTidesSpawnGroup : public ASQTeamSpawnGroup
{
public:
	class AWireTidesSector*                            OwningSector;                                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireTidesSector*                            OwningDefendingSector_TeamOne;                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWireTidesSector*                            OwningDefendingSector_TeamTwo;                             // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyDefenderSpawn : 1;                                    // 0x0408(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AOSM[0x7];                                     // 0x0409(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesSpawnGroup");
		return ptr;
	}


};

// Class WireGame.WireTidesStateDataCaptureZone
// 0x0008 (FullSize[0x01C8] - InheritedSize[0x01C0])
class UWireTidesStateDataCaptureZone : public USQSquadStateDataCaptureZone
{
public:
	unsigned char                                      bIsCurrentSector : 1;                                      // 0x01C0(0x0001) BIT_FIELD  (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O8JU[0x7];                                     // 0x01C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireTidesStateDataCaptureZone");
		return ptr;
	}


};

// Class WireGame.WireUsableMeshActor
// 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
class AWireUsableMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData_N4SI[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	ESQTeam                                            OwningTeam;                                                // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O16A[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQUsableData                               UsableData;                                                // 0x0268(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireUsableMeshActor");
		return ptr;
	}


	void SetOwningTeam(ESQTeam NewTeam);
	bool CanUse(class AController* InController);
};

// Class WireGame.WireWaterVolume
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class AWireWaterVolume : public AWireAreaDamageActor
{
public:
	class UCurveFloat*                                 SlowAmountCurve;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               AreaOfEffect;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalOffset;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaterOffet;                                                // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireWaterVolume");
		return ptr;
	}


};

// Class WireGame.WireWeaponAnimInstance
// 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
class UWireWeaponAnimInstance : public USQWeaponAnimInstance
{
public:
	float                                              MeleeAlpha;                                                // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JU8Y[0xC];                                     // 0x02B4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireWeaponAnimInstance");
		return ptr;
	}


};

// Class WireGame.WireWorldMarker
// 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
class AWireWorldMarker : public AActor
{
public:
	class UTexture2D*                                  MarkerTexture;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       MarkerText;                                                // 0x0250(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EWireWorldMarkerDisplay                            DisplayTo;                                                 // 0x0268(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamID;                                                    // 0x0269(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHH1[0x2];                                     // 0x026A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDrawOnCompass : 1;                                        // 0x026C(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7A8A[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WidgetDisplayTime;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UN6[0xC];                                     // 0x0274(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireWorldMarker");
		return ptr;
	}


	void RemoveMarker();
	class UTexture2D* GetMarkerTexture();
	struct FLinearColor GetMarkerColor();
	void DrawMarker();
};

// Class WireGame.WireWorldSettings
// 0x0040 (FullSize[0x14A0] - InheritedSize[0x1460])
class AWireWorldSettings : public ASQWorldSettings
{
public:
	unsigned char                                      TidesInitialAttackingTeam;                                 // 0x1460(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W2MA[0x3];                                     // 0x1461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bTidesRandomAttackers : 1;                                 // 0x1464(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2500[0x3];                                     // 0x1465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  NoMansLandSectorMask;                                      // 0x1468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AWireTidesSector*>                    InitialFrontlineSectors;                                   // 0x1470(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class AWireTidesPlayableArea*                      TidesNMLPlayableArea;                                      // 0x1480(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTicketsPerPhase;                                        // 0x1488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AssaultAttackingTeam;                                      // 0x148C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D06Z[0x3];                                     // 0x148D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWireCommanderAbilityRuleset*>        TeamCommanderAbilities;                                    // 0x1490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WireGame.WireWorldSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
