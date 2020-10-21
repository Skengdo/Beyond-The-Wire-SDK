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
// Functions
//---------------------------------------------------------------------------

// Function WireGame.WireAbilityRuleset.GetIndexForAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Ability                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWireAbilityRuleset::GetIndexForAbility(class UClass* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityRuleset.GetIndexForAbility");

	UWireAbilityRuleset_GetIndexForAbility_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilityRuleset.GetAbilities
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FWireAbilityData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FWireAbilityData> UWireAbilityRuleset::GetAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityRuleset.GetAbilities");

	UWireAbilityRuleset_GetAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilityScript.SpawnActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// ESpawnActorCollisionHandlingMethod CollisionHandlingMethod        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UWireAbilityScript::SpawnActor(class UClass* ActorClass, const struct FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandlingMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.SpawnActor");

	UWireAbilityScript_SpawnActor_Params params;
	params.ActorClass = ActorClass;
	params.Transform = Transform;
	params.CollisionHandlingMethod = CollisionHandlingMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilityScript.SendClientAuth
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  AbilityIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireAbilityScript::SendClientAuth(unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.SendClientAuth");

	UWireAbilityScript_SendClientAuth_Params params;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilityScript.OnServerExecute
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
void UWireAbilityScript::OnServerExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.OnServerExecute");

	UWireAbilityScript_OnServerExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilityScript.OnServerDestroy
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
void UWireAbilityScript::OnServerDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.OnServerDestroy");

	UWireAbilityScript_OnServerDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilityScript.OnClientExecute
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireAbilityScript::OnClientExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.OnClientExecute");

	UWireAbilityScript_OnClientExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilityScript.OnClientDestroy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireAbilityScript::OnClientDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.OnClientDestroy");

	UWireAbilityScript_OnClientDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilityScript.OnClientAuth
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UWireAbilityScript::OnClientAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.OnClientAuth");

	UWireAbilityScript_OnClientAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilityScript.GetRemainingCooldownTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireAbilityScript::GetRemainingCooldownTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.GetRemainingCooldownTime");

	UWireAbilityScript_GetRemainingCooldownTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilityScript.GetCantExecuteReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWireAbilityScript::GetCantExecuteReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.GetCantExecuteReason");

	UWireAbilityScript_GetCantExecuteReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilityScript.CanExecuteAbility
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireAbilityScript::CanExecuteAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilityScript.CanExecuteAbility");

	UWireAbilityScript_CanExecuteAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilitySystem.UseAbility
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  AbilityIndex                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireAbilitySystem::UseAbility(unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilitySystem.UseAbility");

	AWireAbilitySystem_UseAbility_Params params;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilitySystem.ServerUseCommanderAbility
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  AbilityIndex                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireAbilitySystem::ServerUseCommanderAbility(unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilitySystem.ServerUseCommanderAbility");

	AWireAbilitySystem_ServerUseCommanderAbility_Params params;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilitySystem.ServerAuthAbility
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  AbilityIndex                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireAbilitySystem::ServerAuthAbility(unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilitySystem.ServerAuthAbility");

	AWireAbilitySystem_ServerAuthAbility_Params params;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilitySystem.GetAbilityFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWireAbilityData        AbilityData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWireAbilityScript*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWireAbilityScript* AWireAbilitySystem::GetAbilityFromData(const struct FWireAbilityData& AbilityData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilitySystem.GetAbilityFromData");

	AWireAbilitySystem_GetAbilityFromData_Params params;
	params.AbilityData = AbilityData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAbilitySystem.DiscardClientAuth
// (Native, Protected, BlueprintCallable)
void AWireAbilitySystem::DiscardClientAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilitySystem.DiscardClientAuth");

	AWireAbilitySystem_DiscardClientAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAbilitySystem.AuthAbility
// (Native, Protected, BlueprintCallable)
// Parameters:
// unsigned char                  AbilityIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireAbilitySystem::AuthAbility(unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAbilitySystem.AuthAbility");

	AWireAbilitySystem_AuthAbility_Params params;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAmmoWidget.UpdateWidget
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        CurrentWeapon                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireAmmoWidget::UpdateWidget(class ASQEquipableItem* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAmmoWidget.UpdateWidget");

	UWireAmmoWidget_UpdateWidget_Params params;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAmmoWidget.GetMagazineCount
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQEquipableItem*        Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWireAmmoWidget::GetMagazineCount(class ASQEquipableItem* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAmmoWidget.GetMagazineCount");

	UWireAmmoWidget_GetMagazineCount_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAmmoWidget.GetCurrentWeapon
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQEquipableItem*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASQEquipableItem* UWireAmmoWidget::GetCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAmmoWidget.GetCurrentWeapon");

	UWireAmmoWidget_GetCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAmmoWidget.ClearWidget
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void UWireAmmoWidget::ClearWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAmmoWidget.ClearWidget");

	UWireAmmoWidget_ClearWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePointMapWidget.OnShortNameChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireCapturePointMapWidget::OnShortNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.OnShortNameChanged");

	UWireCapturePointMapWidget_OnShortNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePointMapWidget.OnOwningTeamChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireCapturePointMapWidget::OnOwningTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.OnOwningTeamChanged");

	UWireCapturePointMapWidget_OnOwningTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePointMapWidget.OnDisplayNameChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireCapturePointMapWidget::OnDisplayNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.OnDisplayNameChanged");

	UWireCapturePointMapWidget_OnDisplayNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePointMapWidget.OnCapturingTeamChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireCapturePointMapWidget::OnCapturingTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.OnCapturingTeamChanged");

	UWireCapturePointMapWidget_OnCapturingTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePointMapWidget.OnCaptureProgressChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireCapturePointMapWidget::OnCaptureProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.OnCaptureProgressChanged");

	UWireCapturePointMapWidget_OnCaptureProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePointMapWidget.GetFlagControlValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireCapturePointMapWidget::GetFlagControlValue(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.GetFlagControlValue");

	UWireCapturePointMapWidget_GetFlagControlValue_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireCapturePointMapWidget.GetCapturePointScale
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireCapturePointMapWidget::GetCapturePointScale(float* SizeX, float* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePointMapWidget.GetCapturePointScale");

	UWireCapturePointMapWidget_GetCapturePointScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function WireGame.WireFrontlinesCaptureMapWidget.OnbIsFrontlineChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireFrontlinesCaptureMapWidget::OnbIsFrontlineChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesCaptureMapWidget.OnbIsFrontlineChanged");

	UWireFrontlinesCaptureMapWidget_OnbIsFrontlineChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireAssaultCaptureMapWidget.OnBoundaryAtlasIndexChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireAssaultCaptureMapWidget::OnBoundaryAtlasIndexChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAssaultCaptureMapWidget.OnBoundaryAtlasIndexChanged");

	UWireAssaultCaptureMapWidget_OnBoundaryAtlasIndexChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePoint.OnRep_TeamCaptureRules
// (Native, Public)
// Parameters:
// unsigned char                  OldState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCapturePoint::OnRep_TeamCaptureRules(unsigned char OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePoint.OnRep_TeamCaptureRules");

	AWireCapturePoint_OnRep_TeamCaptureRules_Params params;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePoint.OnRep_OwningTeam
// (Native, Public)
// Parameters:
// unsigned char                  OldState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCapturePoint::OnRep_OwningTeam(unsigned char OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePoint.OnRep_OwningTeam");

	AWireCapturePoint_OnRep_OwningTeam_Params params;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePoint.OnRep_CapturingTeam
// (Native, Public)
// Parameters:
// unsigned char                  OldState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCapturePoint::OnRep_CapturingTeam(unsigned char OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePoint.OnRep_CapturingTeam");

	AWireCapturePoint_OnRep_CapturingTeam_Params params;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePoint.OnRep_CaptureProgress
// (Native, Public)
// Parameters:
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCapturePoint::OnRep_CaptureProgress(float OldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePoint.OnRep_CaptureProgress");

	AWireCapturePoint_OnRep_CaptureProgress_Params params;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCapturePoint.GetTeamCanCapture
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireCapturePoint::GetTeamCanCapture(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePoint.GetTeamCanCapture");

	AWireCapturePoint_GetTeamCanCapture_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireCapturePoint.GetFlagControlValue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  InTeam                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireCapturePoint::GetFlagControlValue(unsigned char InTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCapturePoint.GetFlagControlValue");

	AWireCapturePoint_GetFlagControlValue_Params params;
	params.InTeam = InTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesCapturePoint.GetOwningSector
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AWireFrontlinesSector*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWireFrontlinesSector* AWireFrontlinesCapturePoint::GetOwningSector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesCapturePoint.GetOwningSector");

	AWireFrontlinesCapturePoint_GetOwningSector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesGameMode.OnGraphLatticeUpdated
// (Final, Native, Private)
void AWireFrontlinesGameMode::OnGraphLatticeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGameMode.OnGraphLatticeUpdated");

	AWireFrontlinesGameMode_OnGraphLatticeUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesGameMode.GetRulesetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWireBaseRulesetState*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWireBaseRulesetState* AWireFrontlinesGameMode::GetRulesetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGameMode.GetRulesetState");

	AWireFrontlinesGameMode_GetRulesetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesGameMode.CreateCaptureMarkers
// (Event, Protected, HasOutParms, BlueprintEvent)
void AWireFrontlinesGameMode::CreateCaptureMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGameMode.CreateCaptureMarkers");

	AWireFrontlinesGameMode_CreateCaptureMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesGraphActor.SectorStateChanged
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWireFrontlinesGraphNodeComponent* NodeComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  WinningTeam                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireFrontlinesGraphActor::SectorStateChanged(class UWireFrontlinesGraphNodeComponent* NodeComponent, unsigned char WinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGraphActor.SectorStateChanged");

	AWireFrontlinesGraphActor_SectorStateChanged_Params params;
	params.NodeComponent = NodeComponent;
	params.WinningTeam = WinningTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesGraphActor.MulticastGraphUpdated
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class AWireFrontlinesSector*   Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  WinningTeam                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireFrontlinesGraphActor::MulticastGraphUpdated(class AWireFrontlinesSector* Sector, unsigned char WinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGraphActor.MulticastGraphUpdated");

	AWireFrontlinesGraphActor_MulticastGraphUpdated_Params params;
	params.Sector = Sector;
	params.WinningTeam = WinningTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesGraphActor.GetAllSectors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class AWireFrontlinesSector*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWireFrontlinesSector*> AWireFrontlinesGraphActor::GetAllSectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGraphActor.GetAllSectors");

	AWireFrontlinesGraphActor_GetAllSectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesGraphNodeComponent.UpdateCaptureState
// (Final, Native, Public)
// Parameters:
// class UWireFrontlinesGraphNodeComponent* NodeComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  WinningTeam                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireFrontlinesGraphNodeComponent::UpdateCaptureState(class UWireFrontlinesGraphNodeComponent* NodeComponent, unsigned char WinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGraphNodeComponent.UpdateCaptureState");

	UWireFrontlinesGraphNodeComponent_UpdateCaptureState_Params params;
	params.NodeComponent = NodeComponent;
	params.WinningTeam = WinningTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesGraphNodeComponent.OnGraphInitialized
// (Final, Native, Protected)
void UWireFrontlinesGraphNodeComponent::OnGraphInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesGraphNodeComponent.OnGraphInitialized");

	UWireFrontlinesGraphNodeComponent_OnGraphInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayableArea.OnRep_AllowedTeam
// (Native, Public)
void AWirePlayableArea::OnRep_AllowedTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayableArea.OnRep_AllowedTeam");

	AWirePlayableArea_OnRep_AllowedTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayableArea.GetRemainingBuffTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWirePlayableArea::GetRemainingBuffTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayableArea.GetRemainingBuffTime");

	AWirePlayableArea_GetRemainingBuffTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesPlayableArea.OnSectorStateChanged
// (Native, Protected)
void AWireFrontlinesPlayableArea::OnSectorStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesPlayableArea.OnSectorStateChanged");

	AWireFrontlinesPlayableArea_OnSectorStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesPlayableArea.OnEnteredPlayingStage
// (Native, Protected)
void AWireFrontlinesPlayableArea::OnEnteredPlayingStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesPlayableArea.OnEnteredPlayingStage");

	AWireFrontlinesPlayableArea_OnEnteredPlayingStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireBaseRulesetState.OnRep_MatchState
// (Native, Public)
// Parameters:
// EWireGameMatchState            OldMatchState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireBaseRulesetState::OnRep_MatchState(EWireGameMatchState OldMatchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireBaseRulesetState.OnRep_MatchState");

	AWireBaseRulesetState_OnRep_MatchState_Params params;
	params.OldMatchState = OldMatchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireBaseRulesetState.GetRemainingPrepTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireBaseRulesetState::GetRemainingPrepTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireBaseRulesetState.GetRemainingPrepTime");

	AWireBaseRulesetState_GetRemainingPrepTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireBaseRulesetState.GetRemainingMatchTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireBaseRulesetState::GetRemainingMatchTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireBaseRulesetState.GetRemainingMatchTime");

	AWireBaseRulesetState_GetRemainingMatchTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireAssaultRulesetState.GetAttackingTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AWireAssaultRulesetState::GetAttackingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireAssaultRulesetState.GetAttackingTeam");

	AWireAssaultRulesetState_GetAttackingTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesSector.OnRep_TeamCapturabilities
// (Final, Native, Public)
void AWireFrontlinesSector::OnRep_TeamCapturabilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSector.OnRep_TeamCapturabilities");

	AWireFrontlinesSector_OnRep_TeamCapturabilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSector.OnRep_OwningTeam
// (Native, Public)
// Parameters:
// unsigned char                  LastTeam                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireFrontlinesSector::OnRep_OwningTeam(unsigned char LastTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSector.OnRep_OwningTeam");

	AWireFrontlinesSector_OnRep_OwningTeam_Params params;
	params.LastTeam = LastTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSector.OnIndexedTeamStatesReplicated
// (Final, Native, Protected)
void AWireFrontlinesSector::OnIndexedTeamStatesReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSector.OnIndexedTeamStatesReplicated");

	AWireFrontlinesSector_OnIndexedTeamStatesReplicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSector.GetSectorCaptureValue
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            InTeamId                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireFrontlinesSector::GetSectorCaptureValue(int InTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSector.GetSectorCaptureValue");

	AWireFrontlinesSector_GetSectorCaptureValue_Params params;
	params.InTeamId = InTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesSector.GetIsFrontlineSector
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireFrontlinesSector::GetIsFrontlineSector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSector.GetIsFrontlineSector");

	AWireFrontlinesSector_GetIsFrontlineSector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFrontlinesSector.GetAllCapturePoints
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWireFrontlinesCapturePoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWireFrontlinesCapturePoint*> AWireFrontlinesSector::GetAllCapturePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSector.GetAllCapturePoints");

	AWireFrontlinesSector_GetAllCapturePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireCaptureScoreRuleset.PointCapturing
// (Final, Native, Public)
// Parameters:
// class AWireCapturePoint*       CapturePoint                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCaptureScoreRuleset::PointCapturing(class AWireCapturePoint* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCaptureScoreRuleset.PointCapturing");

	AWireCaptureScoreRuleset_PointCapturing_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCaptureScoreRuleset.PointCaptured
// (Final, Native, Public)
// Parameters:
// class AWireCapturePoint*       CapturePoint                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCaptureScoreRuleset::PointCaptured(class AWireCapturePoint* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCaptureScoreRuleset.PointCaptured");

	AWireCaptureScoreRuleset_PointCaptured_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCaptureScoreRuleset.OnNotifyCapturing
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWireCapturePoint*       CapturePoint                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCaptureScoreRuleset::OnNotifyCapturing(class APlayerController* PC, class AWireCapturePoint* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCaptureScoreRuleset.OnNotifyCapturing");

	AWireCaptureScoreRuleset_OnNotifyCapturing_Params params;
	params.PC = PC;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCaptureScoreRuleset.OnNotifyCaptured
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWireCapturePoint*       CapturePoint                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCaptureScoreRuleset::OnNotifyCaptured(class APlayerController* PC, class AWireCapturePoint* CapturePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCaptureScoreRuleset.OnNotifyCaptured");

	AWireCaptureScoreRuleset_OnNotifyCaptured_Params params;
	params.PC = PC;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCommanderAbilityRuleset.GetCommanderAbilities
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FWireCommanderAbilityData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FWireCommanderAbilityData> UWireCommanderAbilityRuleset::GetCommanderAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderAbilityRuleset.GetCommanderAbilities");

	UWireCommanderAbilityRuleset_GetCommanderAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireCommanderOrderScript.GatherOrderPoints
// (BlueprintAuthorityOnly, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWireCommanderOrderVolume* Owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ASQSoldier*>      RelevantSoldiers               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWireCommanderOrderScript::GatherOrderPoints(class AWireCommanderOrderVolume* Owner, TArray<class ASQSoldier*> RelevantSoldiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderOrderScript.GatherOrderPoints");

	UWireCommanderOrderScript_GatherOrderPoints_Params params;
	params.Owner = Owner;
	params.RelevantSoldiers = RelevantSoldiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireCommanderOrderVolume.OnRep_Squad
// (Final, Native, Public)
void AWireCommanderOrderVolume::OnRep_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderOrderVolume.OnRep_Squad");

	AWireCommanderOrderVolume_OnRep_Squad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCommanderState.ServerDebugAddCommanderPoints
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Points                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCommanderState::ServerDebugAddCommanderPoints(int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderState.ServerDebugAddCommanderPoints");

	AWireCommanderState_ServerDebugAddCommanderPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCommanderState.OnRep_TeamState
// (Final, Native, Protected)
void AWireCommanderState::OnRep_TeamState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderState.OnRep_TeamState");

	AWireCommanderState_OnRep_TeamState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCommanderState.AddCommandPointsOnTeamCapturingPoint
// (Final, Native, Public)
// Parameters:
// class AWireCapturePoint*       InPoint                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCommanderState::AddCommandPointsOnTeamCapturingPoint(class AWireCapturePoint* InPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderState.AddCommandPointsOnTeamCapturingPoint");

	AWireCommanderState_AddCommandPointsOnTeamCapturingPoint_Params params;
	params.InPoint = InPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCommanderState.AddCommandPoints
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireCommanderState::AddCommandPoints(int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCommanderState.AddCommandPoints");

	AWireCommanderState_AddCommandPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCompassWidget.RemoveWorldMarker
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireCompassWidget::RemoveWorldMarker(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCompassWidget.RemoveWorldMarker");

	UWireCompassWidget_RemoveWorldMarker_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCompassWidget.OnNewWorldMarker
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWireWorldMarker*        WorldMarker                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireCompassWidget::OnNewWorldMarker(class AWireWorldMarker* WorldMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCompassWidget.OnNewWorldMarker");

	UWireCompassWidget_OnNewWorldMarker_Params params;
	params.WorldMarker = WorldMarker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCoreStateSquadItemWidget.OnSquadTypeChanged
// (Event, Public, BlueprintEvent)
void UWireCoreStateSquadItemWidget::OnSquadTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCoreStateSquadItemWidget.OnSquadTypeChanged");

	UWireCoreStateSquadItemWidget_OnSquadTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCoreStateSquadListComponent.SetSquadTypeRootWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<EWireSquadType, class UPanelWidget*> InSquadTypeRoots               (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TMap<EWireSquadType, class UUserWidget*> Separators                     (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UWireCoreStateSquadListComponent::SetSquadTypeRootWidgets(TMap<EWireSquadType, class UPanelWidget*> InSquadTypeRoots, TMap<EWireSquadType, class UUserWidget*> Separators)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCoreStateSquadListComponent.SetSquadTypeRootWidgets");

	UWireCoreStateSquadListComponent_SetSquadTypeRootWidgets_Params params;
	params.InSquadTypeRoots = InSquadTypeRoots;
	params.Separators = Separators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireCuttableInterface.IsCuttable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireCuttableInterface::IsCuttable(class UPrimitiveComponent* PrimComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCuttableInterface.IsCuttable");

	UWireCuttableInterface_IsCuttable_Params params;
	params.PrimComp = PrimComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireCuttableInterface.CutWireSection
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWireEquippableCutter*   CutterActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     PrimComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireCuttableInterface::CutWireSection(class AWireEquippableCutter* CutterActor, class UPrimitiveComponent* PrimComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireCuttableInterface.CutWireSection");

	UWireCuttableInterface_CutWireSection_Params params;
	params.CutterActor = CutterActor;
	params.PrimComponent = PrimComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDeployableAmmoBag.CanDisplayPrompt
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireDeployableAmmoBag::CanDisplayPrompt(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDeployableAmmoBag.CanDisplayPrompt");

	AWireDeployableAmmoBag_CanDisplayPrompt_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireDestructibleFence.OnRep_DestroyedFlags
// (Final, Native, Public)
void AWireDestructibleFence::OnRep_DestroyedFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleFence.OnRep_DestroyedFlags");

	AWireDestructibleFence_OnRep_DestroyedFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleFence.OnComponentDestroyed
// (BlueprintAuthorityOnly, Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UWireFenceMeshComponent* MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ImpactPoint                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDestructibleFence::OnComponentDestroyed(class UWireFenceMeshComponent* MeshComp, float DamageAmount, const struct FVector& ImpactPoint, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleFence.OnComponentDestroyed");

	AWireDestructibleFence_OnComponentDestroyed_Params params;
	params.MeshComp = MeshComp;
	params.DamageAmount = DamageAmount;
	params.ImpactPoint = ImpactPoint;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleFence.MulticastMultiComponentDestroyed
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FVector_NetQuantize> ImpactPoints                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AWireDestructibleFence::MulticastMultiComponentDestroyed(TArray<struct FVector_NetQuantize> ImpactPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleFence.MulticastMultiComponentDestroyed");

	AWireDestructibleFence_MulticastMultiComponentDestroyed_Params params;
	params.ImpactPoints = ImpactPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleFence.MulticastComponentDestroyed
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 ImpactPoint                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDestructibleFence::MulticastComponentDestroyed(const struct FVector& ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleFence.MulticastComponentDestroyed");

	AWireDestructibleFence_MulticastComponentDestroyed_Params params;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleBarbed.OnCutWireSection
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWireFenceMeshComponent* MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDestructibleBarbed::OnCutWireSection(class UWireFenceMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleBarbed.OnCutWireSection");

	AWireDestructibleBarbed_OnCutWireSection_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleBarbed.MulticastCutWireSection
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// int                            MeshIndex                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDestructibleBarbed::MulticastCutWireSection(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleBarbed.MulticastCutWireSection");

	AWireDestructibleBarbed_MulticastCutWireSection_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleMeshActor.UpdateDestroyedVisuals
// (Native, Event, Protected, BlueprintEvent)
void AWireDestructibleMeshActor::UpdateDestroyedVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleMeshActor.UpdateDestroyedVisuals");

	AWireDestructibleMeshActor_UpdateDestroyedVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleMeshActor.OnRep_Health
// (Native, Protected)
// Parameters:
// float                          OldHealth                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDestructibleMeshActor::OnRep_Health(float OldHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleMeshActor.OnRep_Health");

	AWireDestructibleMeshActor_OnRep_Health_Params params;
	params.OldHealth = OldHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleMeshActor.OnRep_Destroyed
// (Native, Protected)
void AWireDestructibleMeshActor::OnRep_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleMeshActor.OnRep_Destroyed");

	AWireDestructibleMeshActor_OnRep_Destroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleMeshActor.OnHealthChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// float                          NewHealth                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OldHealth                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDestructibleMeshActor::OnHealthChanged(float NewHealth, float OldHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleMeshActor.OnHealthChanged");

	AWireDestructibleMeshActor_OnHealthChanged_Params params;
	params.NewHealth = NewHealth;
	params.OldHealth = OldHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDestructibleMeshActor.OnDestroyedChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AWireDestructibleMeshActor::OnDestroyedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDestructibleMeshActor.OnDestroyedChanged");

	AWireDestructibleMeshActor_OnDestroyedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDismembermentLimbActor.StopSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInstantDestroy                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDismembermentLimbActor::StopSimulation(bool bInstantDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDismembermentLimbActor.StopSimulation");

	AWireDismembermentLimbActor_StopSimulation_Params params;
	params.bInstantDestroy = bInstantDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireDismembermentLimbActor.StartSimulation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     ParentComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   BoneName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireDismembermentLimbActor::StartSimulation(class UPrimitiveComponent* ParentComp, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireDismembermentLimbActor.StartSimulation");

	AWireDismembermentLimbActor_StartSimulation_Params params;
	params.ParentComp = ParentComp;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireEquippableCutter.ServerPerformCut
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                  InWire                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireEquippableCutter::ServerPerformCut(class AActor* InWire)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireEquippableCutter.ServerPerformCut");

	AWireEquippableCutter_ServerPerformCut_Params params;
	params.InWire = InWire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireEquippableCutter.OnRep_TargetWire
// (Native, Protected)
void AWireEquippableCutter::OnRep_TargetWire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireEquippableCutter.OnRep_TargetWire");

	AWireEquippableCutter_OnRep_TargetWire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireEquippableCutter.IsCuttingWire
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireEquippableCutter::IsCuttingWire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireEquippableCutter.IsCuttingWire");

	AWireEquippableCutter_IsCuttingWire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireEquippableCutter.GetRemainingCutTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireEquippableCutter::GetRemainingCutTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireEquippableCutter.GetRemainingCutTime");

	AWireEquippableCutter_GetRemainingCutTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireEquippableCutter.CanUseTool
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireEquippableCutter::CanUseTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireEquippableCutter.CanUseTool");

	AWireEquippableCutter_CanUseTool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireFlareWeapon.ServerSpawnSupportActor
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     Location                       (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireFlareWeapon::ServerSpawnSupportActor(const struct FVector_NetQuantize& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFlareWeapon.ServerSpawnSupportActor");

	AWireFlareWeapon_ServerSpawnSupportActor_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesCaptureHex.OnRep_CaptureData
// (Final, Native, Public)
void AWireFrontlinesCaptureHex::OnRep_CaptureData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesCaptureHex.OnRep_CaptureData");

	AWireFrontlinesCaptureHex_OnRep_CaptureData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesHexMapWidget.OnHexRadiusChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireFrontlinesHexMapWidget::OnHexRadiusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesHexMapWidget.OnHexRadiusChanged");

	UWireFrontlinesHexMapWidget_OnHexRadiusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorOwningTeamChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UWireFrontlinesSectorMapWidget::OnSectorOwningTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSectorMapWidget.OnSectorOwningTeamChanged");

	UWireFrontlinesSectorMapWidget_OnSectorOwningTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorNameChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UWireFrontlinesSectorMapWidget::OnSectorNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSectorMapWidget.OnSectorNameChanged");

	UWireFrontlinesSectorMapWidget_OnSectorNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorFrontlineChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UWireFrontlinesSectorMapWidget::OnSectorFrontlineChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSectorMapWidget.OnSectorFrontlineChanged");

	UWireFrontlinesSectorMapWidget_OnSectorFrontlineChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSectorMapWidget.OnSectorFlagChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UWireFrontlinesSectorMapWidget::OnSectorFlagChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSectorMapWidget.OnSectorFlagChanged");

	UWireFrontlinesSectorMapWidget_OnSectorFlagChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireFrontlinesSectorMapWidget.GetPlayableAreaTransform
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          OffsetX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OffsetY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireFrontlinesSectorMapWidget::GetPlayableAreaTransform(float* OffsetX, float* OffsetY, float* SizeX, float* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireFrontlinesSectorMapWidget.GetPlayableAreaTransform");

	UWireFrontlinesSectorMapWidget_GetPlayableAreaTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OffsetX != nullptr)
		*OffsetX = params.OffsetX;
	if (OffsetY != nullptr)
		*OffsetY = params.OffsetY;
	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function WireGame.WireGameNotifyWidget.InitializeNotify
// (BlueprintCosmetic, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InMessage                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 InNotifyReason                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDuration                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireGameNotifyWidget::InitializeNotify(const struct FText& InMessage, const struct FString& InNotifyReason, class UObject* Context, float InDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameNotifyWidget.InitializeNotify");

	UWireGameNotifyWidget_InitializeNotify_Params params;
	params.InMessage = InMessage;
	params.InNotifyReason = InNotifyReason;
	params.Context = Context;
	params.InDuration = InDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameNotifyWidget.HideNotify
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireGameNotifyWidget::HideNotify(bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameNotifyWidget.HideNotify");

	UWireGameNotifyWidget_HideNotify_Params params;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameplayStatics.GetTidesGameplayManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWireTidesRulesetState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWireTidesRulesetState* UWireGameplayStatics::STATIC_GetTidesGameplayManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameplayStatics.GetTidesGameplayManager");

	UWireGameplayStatics_GetTidesGameplayManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireGameplayStatics>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireGameplayStatics.GetRulesetState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASQRulesetState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASQRulesetState* UWireGameplayStatics::STATIC_GetRulesetState(class UObject* WorldContextObject, class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameplayStatics.GetRulesetState");

	UWireGameplayStatics_GetRulesetState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireGameplayStatics>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireGameplayStatics.ApplyDestructibleFenceRadialDamage
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinimumDamage                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageInnerRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageOuterRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageFalloff                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedByController         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireGameplayStatics::STATIC_ApplyDestructibleFenceRadialDamage(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameplayStatics.ApplyDestructibleFenceRadialDamage");

	UWireGameplayStatics_ApplyDestructibleFenceRadialDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.MinimumDamage = MinimumDamage;
	params.Origin = Origin;
	params.DamageInnerRadius = DamageInnerRadius;
	params.DamageOuterRadius = DamageOuterRadius;
	params.DamageFalloff = DamageFalloff;
	params.IgnoreActors = IgnoreActors;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireGameplayStatics>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameSpawnMobile.AttachToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireGameSpawnMobile::AttachToActor(class AActor* Actor, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameSpawnMobile.AttachToActor");

	AWireGameSpawnMobile_AttachToActor_Params params;
	params.Actor = Actor;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameSquadSpawn.OnRep_SquadState
// (Final, Native, Protected)
void AWireGameSquadSpawn::OnRep_SquadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameSquadSpawn.OnRep_SquadState");

	AWireGameSquadSpawn_OnRep_SquadState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameUserSettings.SetDepthOfFieldAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           inDepthOfField                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireGameUserSettings::SetDepthOfFieldAmount(bool inDepthOfField)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameUserSettings.SetDepthOfFieldAmount");

	UWireGameUserSettings_SetDepthOfFieldAmount_Params params;
	params.inDepthOfField = inDepthOfField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameUserSettings.RequestExit
// (Final, Native, Public, BlueprintCallable)
void UWireGameUserSettings::RequestExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameUserSettings.RequestExit");

	UWireGameUserSettings_RequestExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGameUserSettings.GetDepthOfFieldAmount
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireGameUserSettings::GetDepthOfFieldAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGameUserSettings.GetDepthOfFieldAmount");

	UWireGameUserSettings_GetDepthOfFieldAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireGasMask.ServerMaskEquipped
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bNewEquipped                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireGasMask::ServerMaskEquipped(bool bNewEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGasMask.ServerMaskEquipped");

	AWireGasMask_ServerMaskEquipped_Params params;
	params.bNewEquipped = bNewEquipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireGasMask.OnRep_MaskEquipped
// (Native, Public)
void AWireGasMask::OnRep_MaskEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireGasMask.OnRep_MaskEquipped");

	AWireGasMask_OnRep_MaskEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireHUD.ToggleReviveWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireHUD::ToggleReviveWidget(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireHUD.ToggleReviveWidget");

	AWireHUD_ToggleReviveWidget_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireHUD.OpenChat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ESQChat                        Channel                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireHUD::OpenChat(ESQChat Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireHUD.OpenChat");

	AWireHUD_OpenChat_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireHUD.OnFadeToDeathFinished
// (Native, Event, Public, BlueprintEvent)
void AWireHUD::OnFadeToDeathFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireHUD.OnFadeToDeathFinished");

	AWireHUD_OnFadeToDeathFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireHUD.NotifyBecameWounded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void AWireHUD::NotifyBecameWounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireHUD.NotifyBecameWounded");

	AWireHUD_NotifyBecameWounded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireHUD.DestroySceneWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SceneActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireHUD::DestroySceneWidget(class AActor* SceneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireHUD.DestroySceneWidget");

	AWireHUD_DestroySceneWidget_Params params;
	params.SceneActor = SceneActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireHUD.CreateSceneWidget
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  SceneActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 MarkerLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseStaticLocation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireHUD::CreateSceneWidget(class AActor* SceneActor, class UClass* WidgetClass, const struct FVector& MarkerLocation, bool bUseStaticLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireHUD.CreateSceneWidget");

	AWireHUD_CreateSceneWidget_Params params;
	params.SceneActor = SceneActor;
	params.WidgetClass = WidgetClass;
	params.MarkerLocation = MarkerLocation;
	params.bUseStaticLocation = bUseStaticLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.ServerStopCharging
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AWireInfantryWeapon::ServerStopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.ServerStopCharging");

	AWireInfantryWeapon_ServerStopCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.ServerStartCharging
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AWireInfantryWeapon::ServerStartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.ServerStartCharging");

	AWireInfantryWeapon_ServerStartCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.ServerStartAttacking
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AWireInfantryWeapon::ServerStartAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.ServerStartAttacking");

	AWireInfantryWeapon_ServerStartAttacking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.ServerNotifyMeleeHit
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AWireInfantryWeapon::ServerNotifyMeleeHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.ServerNotifyMeleeHit");

	AWireInfantryWeapon_ServerNotifyMeleeHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.ServerFireProjectileMulti
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FWireShotInfoMulti      ShotInfo                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AWireInfantryWeapon::ServerFireProjectileMulti(const struct FWireShotInfoMulti& ShotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.ServerFireProjectileMulti");

	AWireInfantryWeapon_ServerFireProjectileMulti_Params params;
	params.ShotInfo = ShotInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.ServerEquipMelee
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireInfantryWeapon::ServerEquipMelee(bool bEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.ServerEquipMelee");

	AWireInfantryWeapon_ServerEquipMelee_Params params;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.OnRep_IsMeleeEquipped
// (Final, Native, Protected)
void AWireInfantryWeapon::OnRep_IsMeleeEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.OnRep_IsMeleeEquipped");

	AWireInfantryWeapon_OnRep_IsMeleeEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.OnEnteredMeleeState
// (Event, Protected, BlueprintEvent)
// Parameters:
// EWireMeleeState                NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWireMeleeState                OldState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireInfantryWeapon::OnEnteredMeleeState(EWireMeleeState NewState, EWireMeleeState OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.OnEnteredMeleeState");

	AWireInfantryWeapon_OnEnteredMeleeState_Params params;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.MulticastStopCharging
// (Net, Native, Event, NetMulticast, Protected)
void AWireInfantryWeapon::MulticastStopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.MulticastStopCharging");

	AWireInfantryWeapon_MulticastStopCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.MulticastStartCharging
// (Net, Native, Event, NetMulticast, Protected)
void AWireInfantryWeapon::MulticastStartCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.MulticastStartCharging");

	AWireInfantryWeapon_MulticastStartCharging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.MulticastStartAttacking
// (Net, Native, Event, NetMulticast, Protected)
void AWireInfantryWeapon::MulticastStartAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.MulticastStartAttacking");

	AWireInfantryWeapon_MulticastStartAttacking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.MulticastFireProjectileMulti
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// TArray<struct FShotInfoMultiData> Infos                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AWireInfantryWeapon::MulticastFireProjectileMulti(TArray<struct FShotInfoMultiData> Infos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.MulticastFireProjectileMulti");

	AWireInfantryWeapon_MulticastFireProjectileMulti_Params params;
	params.Infos = Infos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.MulticastEquipMelee
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireInfantryWeapon::MulticastEquipMelee(bool bEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.MulticastEquipMelee");

	AWireInfantryWeapon_MulticastEquipMelee_Params params;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInfantryWeapon.GetMeleeState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireMeleeState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EWireMeleeState AWireInfantryWeapon::GetMeleeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.GetMeleeState");

	AWireInfantryWeapon_GetMeleeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireInfantryWeapon.CanSwitchWeapon
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireInfantryWeapon::CanSwitchWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInfantryWeapon.CanSwitchWeapon");

	AWireInfantryWeapon_CanSwitchWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireInventoryGroupWidget.OnSelectedChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireInventoryGroupWidget::OnSelectedChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInventoryGroupWidget.OnSelectedChanged");

	UWireInventoryGroupWidget_OnSelectedChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInventoryGroupWidget.OnActiveChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireInventoryGroupWidget::OnActiveChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInventoryGroupWidget.OnActiveChanged");

	UWireInventoryGroupWidget_OnActiveChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInventoryItemWidget.OnSelectedChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireInventoryItemWidget::OnSelectedChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInventoryItemWidget.OnSelectedChanged");

	UWireInventoryItemWidget_OnSelectedChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInventoryItemWidget.OnGroupActiveChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireInventoryItemWidget::OnGroupActiveChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInventoryItemWidget.OnGroupActiveChanged");

	UWireInventoryItemWidget_OnGroupActiveChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireInventoryItemWidget.OnActiveChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireInventoryItemWidget::OnActiveChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireInventoryItemWidget.OnActiveChanged");

	UWireInventoryItemWidget_OnActiveChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireKismetLibrary.UnregisterSignificanceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireKismetLibrary::STATIC_UnregisterSignificanceActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.UnregisterSignificanceActor");

	UWireKismetLibrary_UnregisterSignificanceActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireKismetLibrary.SortSectorsByTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class AWireFrontlinesSector*> InSectors                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AWireFrontlinesSector*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWireFrontlinesSector*> UWireKismetLibrary::STATIC_SortSectorsByTeam(TArray<class AWireFrontlinesSector*> InSectors, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.SortSectorsByTeam");

	UWireKismetLibrary_SortSectorsByTeam_Params params;
	params.InSectors = InSectors;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.SortSectors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class AWireTidesSector*> InList                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bLowestFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AWireTidesSector*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWireTidesSector*> UWireKismetLibrary::STATIC_SortSectors(TArray<class AWireTidesSector*> InList, bool bLowestFirst, int MaxRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.SortSectors");

	UWireKismetLibrary_SortSectors_Params params;
	params.InList = InList;
	params.bLowestFirst = bLowestFirst;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.ReverseSectorOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class AWireFrontlinesSector*> InSectors                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class AWireFrontlinesSector*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWireFrontlinesSector*> UWireKismetLibrary::STATIC_ReverseSectorOrder(TArray<class AWireFrontlinesSector*> InSectors)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.ReverseSectorOrder");

	UWireKismetLibrary_ReverseSectorOrder_Params params;
	params.InSectors = InSectors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.RegisterSignificanceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireKismetLibrary::STATIC_RegisterSignificanceActor(class AActor* Target, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.RegisterSignificanceActor");

	UWireKismetLibrary_RegisterSignificanceActor_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireKismetLibrary.IsWithEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireKismetLibrary::STATIC_IsWithEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.IsWithEditor");

	UWireKismetLibrary_IsWithEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.HideLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeDuration                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireKismetLibrary::STATIC_HideLoadingScreen(class UObject* WorldContext, float FadeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.HideLoadingScreen");

	UWireKismetLibrary_HideLoadingScreen_Params params;
	params.WorldContext = WorldContext;
	params.FadeDuration = FadeDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireKismetLibrary.GetSquadRoleData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ASQPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USQRoleSettings*> Settings                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bCheckAvalibility              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWireSquadRoleDataGroup> OutGroups                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWireKismetLibrary::STATIC_GetSquadRoleData(class ASQPlayerState* PlayerState, TArray<class USQRoleSettings*> Settings, bool bCheckAvalibility, TArray<struct FWireSquadRoleDataGroup>* OutGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.GetSquadRoleData");

	UWireKismetLibrary_GetSquadRoleData_Params params;
	params.PlayerState = PlayerState;
	params.Settings = Settings;
	params.bCheckAvalibility = bCheckAvalibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGroups != nullptr)
		*OutGroups = params.OutGroups;

}


// Function WireGame.WireKismetLibrary.GetScreenSizeAndDistance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ViewLocation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FOV                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutScreenSize                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutDistance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireKismetLibrary::STATIC_GetScreenSizeAndDistance(class USceneComponent* InComponent, const struct FVector& ViewLocation, float FOV, float* OutScreenSize, float* OutDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.GetScreenSizeAndDistance");

	UWireKismetLibrary_GetScreenSizeAndDistance_Params params;
	params.InComponent = InComponent;
	params.ViewLocation = ViewLocation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutScreenSize != nullptr)
		*OutScreenSize = params.OutScreenSize;
	if (OutDistance != nullptr)
		*OutDistance = params.OutDistance;

}


// Function WireGame.WireKismetLibrary.GetMapDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MapPath                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UWireKismetLibrary::STATIC_GetMapDisplayName(const struct FString& MapPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.GetMapDisplayName");

	UWireKismetLibrary_GetMapDisplayName_Params params;
	params.MapPath = MapPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.GetDevelopmentUpdates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWireDevelopmentUpdateData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FWireDevelopmentUpdateData> UWireKismetLibrary::STATIC_GetDevelopmentUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.GetDevelopmentUpdates");

	UWireKismetLibrary_GetDevelopmentUpdates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.GetBuildUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWireDevelopmentUpdateData ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FWireDevelopmentUpdateData UWireKismetLibrary::STATIC_GetBuildUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.GetBuildUpdate");

	UWireKismetLibrary_GetBuildUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireKismetLibrary.GetBTWGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWireGameUserSettings*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWireGameUserSettings* UWireKismetLibrary::STATIC_GetBTWGameUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireKismetLibrary.GetBTWGameUserSettings");

	UWireKismetLibrary_GetBTWGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireKismetLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireManualWeapon.ServerManualAction
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AWireManualWeapon::ServerManualAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireManualWeapon.ServerManualAction");

	AWireManualWeapon_ServerManualAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireManualWeapon.ServerCancelReload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AWireManualWeapon::ServerCancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireManualWeapon.ServerCancelReload");

	AWireManualWeapon_ServerCancelReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireManualWeapon.OnRep_ManualAction
// (Native, Protected)
void AWireManualWeapon::OnRep_ManualAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireManualWeapon.OnRep_ManualAction");

	AWireManualWeapon_OnRep_ManualAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireManualWeapon.MulticastCancelReload
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AWireManualWeapon::MulticastCancelReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireManualWeapon.MulticastCancelReload");

	AWireManualWeapon_MulticastCancelReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.ServerStopBlocking
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AWireMeleeWeapon::ServerStopBlocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.ServerStopBlocking");

	AWireMeleeWeapon_ServerStopBlocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.ServerStartBlocking
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// EWireMeleeBlockDir             InBlockDirection               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::ServerStartBlocking(EWireMeleeBlockDir InBlockDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.ServerStartBlocking");

	AWireMeleeWeapon_ServerStartBlocking_Params params;
	params.InBlockDirection = InBlockDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.ServerStartAttacking
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FWireMeleeReplicatedAttackData AttackData                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::ServerStartAttacking(const struct FWireMeleeReplicatedAttackData& AttackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.ServerStartAttacking");

	AWireMeleeWeapon_ServerStartAttacking_Params params;
	params.AttackData = AttackData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.ServerNotifyHit
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::ServerNotifyHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.ServerNotifyHit");

	AWireMeleeWeapon_ServerNotifyHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.OnUpdateMouseDelta
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          MouseX                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MouseY                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::OnUpdateMouseDelta(float MouseX, float MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.OnUpdateMouseDelta");

	AWireMeleeWeapon_OnUpdateMouseDelta_Params params;
	params.MouseX = MouseX;
	params.MouseY = MouseY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.OnEnteredState
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// EWireMeleeState                NewState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWireMeleeState                OldState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::OnEnteredState(EWireMeleeState NewState, EWireMeleeState OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.OnEnteredState");

	AWireMeleeWeapon_OnEnteredState_Params params;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.MulticastStopBlocking
// (Net, Native, Event, NetMulticast, Protected)
void AWireMeleeWeapon::MulticastStopBlocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.MulticastStopBlocking");

	AWireMeleeWeapon_MulticastStopBlocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.MulticastStartBlocking
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// EWireMeleeBlockDir             InBlockDirection               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::MulticastStartBlocking(EWireMeleeBlockDir InBlockDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.MulticastStartBlocking");

	AWireMeleeWeapon_MulticastStartBlocking_Params params;
	params.InBlockDirection = InBlockDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.MulticastStartAttacking
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FWireMeleeReplicatedAttackData AttackData                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AWireMeleeWeapon::MulticastStartAttacking(const struct FWireMeleeReplicatedAttackData& AttackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.MulticastStartAttacking");

	AWireMeleeWeapon_MulticastStartAttacking_Params params;
	params.AttackData = AttackData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireMeleeWeapon.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireMeleeState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EWireMeleeState AWireMeleeWeapon::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.GetState");

	AWireMeleeWeapon_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireMeleeWeapon.GetNewBlockDirection
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireMeleeBlockDir             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EWireMeleeBlockDir AWireMeleeWeapon::GetNewBlockDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMeleeWeapon.GetNewBlockDirection");

	AWireMeleeWeapon_GetNewBlockDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireMovementInterface.GetStaminaPenalty
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          NativePenalty                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireMovementInterface::GetStaminaPenalty(float NativePenalty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMovementInterface.GetStaminaPenalty");

	UWireMovementInterface_GetStaminaPenalty_Params params;
	params.NativePenalty = NativePenalty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireMovementInterface.GetSlopeModifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          NativeModifier                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireMovementInterface::GetSlopeModifier(float NativeModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMovementInterface.GetSlopeModifier");

	UWireMovementInterface_GetSlopeModifier_Params params;
	params.NativeModifier = NativeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireMovementInterface.GetMovementSpeedModifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireMovementInterface::GetMovementSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireMovementInterface.GetMovementSpeedModifier");

	UWireMovementInterface_GetMovementSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireObjectiveMapWidget.OnDataChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireObjectiveMapWidget::OnDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireObjectiveMapWidget.OnDataChanged");

	UWireObjectiveMapWidget_OnDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePawnInventoryComponent.OnRep_GasMask
// (Final, Native, Public)
void UWirePawnInventoryComponent::OnRep_GasMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePawnInventoryComponent.OnRep_GasMask");

	UWirePawnInventoryComponent_OnRep_GasMask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerCameraManager.StopFadeToDeath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWirePlayerCameraManager::StopFadeToDeath(bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerCameraManager.StopFadeToDeath");

	AWirePlayerCameraManager_StopFadeToDeath_Params params;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerCameraManager.StartFadeToDeath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWirePlayerCameraManager::StartFadeToDeath(bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerCameraManager.StartFadeToDeath");

	AWirePlayerCameraManager_StartFadeToDeath_Params params;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.TrackMarkerPlaced
// (Final, Native, Public, BlueprintCallable)
void AWirePlayerController::TrackMarkerPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.TrackMarkerPlaced");

	AWirePlayerController_TrackMarkerPlaced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.ShowPhasePrepWidget
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWirePlayerController::ShowPhasePrepWidget(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.ShowPhasePrepWidget");

	AWirePlayerController_ShowPhasePrepWidget_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.ShowMaskTexture
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*              MaskTexture                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMaskEquipped                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWirePlayerController::ShowMaskTexture(class UTexture2D* MaskTexture, bool bMaskEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.ShowMaskTexture");

	AWirePlayerController_ShowMaskTexture_Params params;
	params.MaskTexture = MaskTexture;
	params.bMaskEquipped = bMaskEquipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.ShowGameplayNotification
// (BlueprintCosmetic, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   InMessage                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 InNotifyReason                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 InContext                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDuration                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWireGameNotifyWidget*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWireGameNotifyWidget* AWirePlayerController::ShowGameplayNotification(class UClass* WidgetClass, const struct FText& InMessage, const struct FString& InNotifyReason, class UObject* InContext, float InDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.ShowGameplayNotification");

	AWirePlayerController_ShowGameplayNotification_Params params;
	params.WidgetClass = WidgetClass;
	params.InMessage = InMessage;
	params.InNotifyReason = InNotifyReason;
	params.InContext = InContext;
	params.InDuration = InDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WirePlayerController.ServerRequestSupportMarker
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     Location                       (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWirePlayerController::ServerRequestSupportMarker(const struct FVector_NetQuantize& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.ServerRequestSupportMarker");

	AWirePlayerController_ServerRequestSupportMarker_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.ServerDestroyRallyPoint
// (Net, Native, Event, Public, NetServer, NetValidate)
void AWirePlayerController::ServerDestroyRallyPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.ServerDestroyRallyPoint");

	AWirePlayerController_ServerDestroyRallyPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.RequestSupportMarker
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FText                   OutErrorMessage                (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FVector                 PlacementLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWirePlayerController::RequestSupportMarker(struct FText* OutErrorMessage, struct FVector* PlacementLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.RequestSupportMarker");

	AWirePlayerController_RequestSupportMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutErrorMessage != nullptr)
		*OutErrorMessage = params.OutErrorMessage;
	if (PlacementLocation != nullptr)
		*PlacementLocation = params.PlacementLocation;


	return params.ReturnValue;
}


// Function WireGame.WirePlayerController.OnRep_BeingRevived
// (Final, Native, Public)
void AWirePlayerController::OnRep_BeingRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.OnRep_BeingRevived");

	AWirePlayerController_OnRep_BeingRevived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.NotifyInEnemyTerritory
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWirePlayerController::NotifyInEnemyTerritory(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.NotifyInEnemyTerritory");

	AWirePlayerController_NotifyInEnemyTerritory_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.GetInteractProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWirePlayerController::GetInteractProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.GetInteractProgress");

	AWirePlayerController_GetInteractProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WirePlayerController.GetGiveUpProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWirePlayerController::GetGiveUpProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.GetGiveUpProgress");

	AWirePlayerController_GetGiveUpProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WirePlayerController.DestroyRallyPoint
// (Final, Exec, Native, Public, BlueprintCallable)
void AWirePlayerController::DestroyRallyPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.DestroyRallyPoint");

	AWirePlayerController_DestroyRallyPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.DebugCrash
// (Final, Exec, Native, Public, Const)
void AWirePlayerController::DebugCrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.DebugCrash");

	AWirePlayerController_DebugCrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WirePlayerController.CanPlaceMarker
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWirePlayerController::CanPlaceMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WirePlayerController.CanPlaceMarker");

	AWirePlayerController_CanPlaceMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSignificanceInterface.HandleSignificance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OldSignificance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Significance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFinal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireSignificanceInterface::HandleSignificance(class UObject* Object, const struct FName& Tag, float OldSignificance, float Significance, bool bFinal)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSignificanceInterface.HandleSignificance");

	UWireSignificanceInterface_HandleSignificance_Params params;
	params.Object = Object;
	params.Tag = Tag;
	params.OldSignificance = OldSignificance;
	params.Significance = Significance;
	params.bFinal = bFinal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSignificanceInterface.EvaluateSignificance
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CurrentSignificance            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ViewPoint                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireSignificanceInterface::EvaluateSignificance(class UObject* Object, const struct FName& Tag, float CurrentSignificance, const struct FTransform& ViewPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSignificanceInterface.EvaluateSignificance");

	UWireSignificanceInterface_EvaluateSignificance_Params params;
	params.Object = Object;
	params.Tag = Tag;
	params.CurrentSignificance = CurrentSignificance;
	params.ViewPoint = ViewPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSLAbilityScript.OnEndAbility
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
void UWireSLAbilityScript::OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSLAbilityScript.OnEndAbility");

	UWireSLAbilityScript_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSLAbilityScript.OnAbilityTick
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireSLAbilityScript::OnAbilityTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSLAbilityScript.OnAbilityTick");

	UWireSLAbilityScript_OnAbilityTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.SpawnHitBloodSplatter
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ASQProjectile*           Projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ShotDirection                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSoldier::SpawnHitBloodSplatter(class ASQProjectile* Projectile, const struct FVector& ShotDirection, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.SpawnHitBloodSplatter");

	AWireSoldier_SpawnHitBloodSplatter_Params params;
	params.Projectile = Projectile;
	params.ShotDirection = ShotDirection;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.SpawnHitBlood
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Damage                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ShotDirection                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AWireSoldier::SpawnHitBlood(float Damage, const struct FVector& ShotDirection, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.SpawnHitBlood");

	AWireSoldier_SpawnHitBlood_Params params;
	params.Damage = Damage;
	params.ShotDirection = ShotDirection;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.SetWireSlowdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSoldier::SetWireSlowdown(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.SetWireSlowdown");

	AWireSoldier_SetWireSlowdown_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.SetWaterSlowdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSoldier::SetWaterSlowdown(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.SetWaterSlowdown");

	AWireSoldier_SetWaterSlowdown_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.SetFocus
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                           bNewFocus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSoldier::SetFocus(bool bNewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.SetFocus");

	AWireSoldier_SetFocus_Params params;
	params.bNewFocus = bNewFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.PlayCameraShake
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  Shake                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<ECameraAnimPlaySpace> PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AWireSoldier::PlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.PlayCameraShake");

	AWireSoldier_PlayCameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.OnRep_ReplicatedCustomization
// (Final, Native, Public)
void AWireSoldier::OnRep_ReplicatedCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.OnRep_ReplicatedCustomization");

	AWireSoldier_OnRep_ReplicatedCustomization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.OnRep_DismembermentFlags
// (Final, Native, Public)
void AWireSoldier::OnRep_DismembermentFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.OnRep_DismembermentFlags");

	AWireSoldier_OnRep_DismembermentFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSoldier.GetNormalizedInteractProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireSoldier::GetNormalizedInteractProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSoldier.GetNormalizedInteractProgress");

	AWireSoldier_GetNormalizedInteractProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquad.GetSquadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireSquadType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EWireSquadType AWireSquad::GetSquadType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquad.GetSquadType");

	AWireSquad_GetSquadType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadRallyPoint.OnPlayableAreaTeamChanged
// (Final, Native, Protected)
// Parameters:
// class AWirePlayableArea*       InArea                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadRallyPoint::OnPlayableAreaTeamChanged(class AWirePlayableArea* InArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadRallyPoint.OnPlayableAreaTeamChanged");

	AWireSquadRallyPoint_OnPlayableAreaTeamChanged_Params params;
	params.InArea = InArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadState.UseSLAbility
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ASQPlayerState*          Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  AbilityIndex                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadState::UseSLAbility(class ASQPlayerState* Player, unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.UseSLAbility");

	AWireSquadState_UseSLAbility_Params params;
	params.Player = Player;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadState.UseDeployable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWireDeployable*         InDeployable                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadState::UseDeployable(class AWireDeployable* InDeployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.UseDeployable");

	AWireSquadState_UseDeployable_Params params;
	params.InDeployable = InDeployable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadState.ReleaseDeployable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWireDeployable*         InDeployable                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadState::ReleaseDeployable(class AWireDeployable* InDeployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.ReleaseDeployable");

	AWireSquadState_ReleaseDeployable_Params params;
	params.InDeployable = InDeployable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadState.OnRep_SquadType
// (Final, Native, Public)
void AWireSquadState::OnRep_SquadType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.OnRep_SquadType");

	AWireSquadState_OnRep_SquadType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadState.GetSLAbilityRuleset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWireAbilityRuleset*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWireAbilityRuleset* AWireSquadState::GetSLAbilityRuleset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.GetSLAbilityRuleset");

	AWireSquadState_GetSLAbilityRuleset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadState.GetCantUseSLAbilityReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AWireSquadState::GetCantUseSLAbilityReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.GetCantUseSLAbilityReason");

	AWireSquadState_GetCantUseSLAbilityReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadState.DestroyOldestDeployable
// (Final, Native, Public, BlueprintCallable)
void AWireSquadState::DestroyOldestDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.DestroyOldestDeployable");

	AWireSquadState_DestroyOldestDeployable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadState.CanUseSLAbility
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ASQPlayerState*          Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  AbilityIndex                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireSquadState::CanUseSLAbility(class ASQPlayerState* Player, unsigned char AbilityIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.CanUseSLAbility");

	AWireSquadState_CanUseSLAbility_Params params;
	params.Player = Player;
	params.AbilityIndex = AbilityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadState.CanDeploy
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InDeployableType               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireSquadState::CanDeploy(class UClass* InDeployableType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadState.CanDeploy");

	AWireSquadState_CanDeploy_Params params;
	params.InDeployableType = InDeployableType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadStatePrivate.OnRep_SupportMarkerData
// (Final, Native, Public)
void AWireSquadStatePrivate::OnRep_SupportMarkerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadStatePrivate.OnRep_SupportMarkerData");

	AWireSquadStatePrivate_OnRep_SupportMarkerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadSupportActor.GetRoundLocation
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AWireSquadSupportActor::GetRoundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadSupportActor.GetRoundLocation");

	AWireSquadSupportActor_GetRoundLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadSupportActor.GetRoundInterval
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireSquadSupportActor::GetRoundInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadSupportActor.GetRoundInterval");

	AWireSquadSupportActor_GetRoundInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSquadSupportArtillery.SpawnExplodeEffects
// (BlueprintCosmetic, Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadSupportArtillery::SpawnExplodeEffects(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadSupportArtillery.SpawnExplodeEffects");

	AWireSquadSupportArtillery_SpawnExplodeEffects_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadSupportArtillery.ServerExplode
// (BlueprintAuthorityOnly, Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadSupportArtillery::ServerExplode(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadSupportArtillery.ServerExplode");

	AWireSquadSupportArtillery_ServerExplode_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadSupportArtillery.PlayIncomingSound
// (BlueprintCosmetic, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireSquadSupportArtillery::PlayIncomingSound(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadSupportArtillery.PlayIncomingSound");

	AWireSquadSupportArtillery_PlayIncomingSound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSquadSupportArtillery.GetSupportEndTime
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                          ShellTotalDuration             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireSquadSupportArtillery::GetSupportEndTime(float ShellTotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSquadSupportArtillery.GetSupportEndTime");

	AWireSquadSupportArtillery_GetSupportEndTime_Params params;
	params.ShellTotalDuration = ShellTotalDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.SortSteamFriends
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWireSteamFriend> InFriends                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FWireSteamFriend> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FWireSteamFriend> UWireSteamBlueprintLibrary::STATIC_SortSteamFriends(TArray<struct FWireSteamFriend> InFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.SortSteamFriends");

	UWireSteamBlueprintLibrary_SortSteamFriends_Params params;
	params.InFriends = InFriends;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.OpenSteamUserProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWireSteamId            SteamId                        (Parm, NativeAccessSpecifierPublic)
void UWireSteamBlueprintLibrary::STATIC_OpenSteamUserProfile(const struct FWireSteamId& SteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.OpenSteamUserProfile");

	UWireSteamBlueprintLibrary_OpenSteamUserProfile_Params params;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSteamBlueprintLibrary.GetSteamOnlineStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EWireSteamOnlineStatus         OutStatus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireSteamBlueprintLibrary::STATIC_GetSteamOnlineStatus(EWireSteamOnlineStatus* OutStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.GetSteamOnlineStatus");

	UWireSteamBlueprintLibrary_GetSteamOnlineStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutStatus != nullptr)
		*OutStatus = params.OutStatus;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.GetSteamId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWireSteamId            OutSteamId                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireSteamBlueprintLibrary::STATIC_GetSteamId(class APlayerState* PlayerState, struct FWireSteamId* OutSteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.GetSteamId");

	UWireSteamBlueprintLibrary_GetSteamId_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSteamId != nullptr)
		*OutSteamId = params.OutSteamId;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendsList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWireSteamFriend> OutFriends                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireSteamBlueprintLibrary::STATIC_GetSteamFriendsList(class APlayerController* PC, TArray<struct FWireSteamFriend>* OutFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendsList");

	UWireSteamBlueprintLibrary_GetSteamFriendsList_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFriends != nullptr)
		*OutFriends = params.OutFriends;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWireSteamId            SteamId                        (Parm, NativeAccessSpecifierPublic)
// struct FString                 PresenceKey                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UWireSteamBlueprintLibrary::STATIC_GetSteamFriendRichPresence(const struct FWireSteamId& SteamId, const struct FString& PresenceKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendRichPresence");

	UWireSteamBlueprintLibrary_GetSteamFriendRichPresence_Params params;
	params.SteamId = SteamId;
	params.PresenceKey = PresenceKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWireSteamId            FriendSteamId                  (Parm, NativeAccessSpecifierPublic)
// EWireSteamAvatarSize           AvatarSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWireSteamAsyncCallback        AsyncResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UWireSteamBlueprintLibrary::STATIC_GetSteamFriendAvatar(const struct FWireSteamId& FriendSteamId, EWireSteamAvatarSize AvatarSize, EWireSteamAsyncCallback* AsyncResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.GetSteamFriendAvatar");

	UWireSteamBlueprintLibrary_GetSteamFriendAvatar_Params params;
	params.FriendSteamId = FriendSteamId;
	params.AvatarSize = AvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsyncResult != nullptr)
		*AsyncResult = params.AsyncResult;


	return params.ReturnValue;
}


// Function WireGame.WireSteamBlueprintLibrary.GetSteamFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWireSteamId            FriendSteamId                  (Parm, NativeAccessSpecifierPublic)
// struct FWireSteamFriend        OutFriend                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWireSteamBlueprintLibrary::STATIC_GetSteamFriend(class APlayerController* PC, const struct FWireSteamId& FriendSteamId, struct FWireSteamFriend* OutFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamBlueprintLibrary.GetSteamFriend");

	UWireSteamBlueprintLibrary_GetSteamFriend_Params params;
	params.PC = PC;
	params.FriendSteamId = FriendSteamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFriend != nullptr)
		*OutFriend = params.OutFriend;


	return params.ReturnValue;
}


// Function WireGame.WireSteamFriendsCallbackProxy.GetAndStoreFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWireSteamFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWireSteamFriendsCallbackProxy* UWireSteamFriendsCallbackProxy::STATIC_GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSteamFriendsCallbackProxy.GetAndStoreFriendsList");

	UWireSteamFriendsCallbackProxy_GetAndStoreFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWireSteamFriendsCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireSupportMarkerMapWidget.OnSquadIdChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireSupportMarkerMapWidget::OnSquadIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSupportMarkerMapWidget.OnSquadIdChanged");

	UWireSupportMarkerMapWidget_OnSquadIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSupportMarkerMapWidget.OnIsActiveChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWireSupportMarkerMapWidget::OnIsActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSupportMarkerMapWidget.OnIsActiveChanged");

	UWireSupportMarkerMapWidget_OnIsActiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireSupportMarkerMapWidget.GetMarkerVisiblity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
ESlateVisibility UWireSupportMarkerMapWidget::GetMarkerVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireSupportMarkerMapWidget.GetMarkerVisiblity");

	UWireSupportMarkerMapWidget_GetMarkerVisiblity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamInfo.GetSquadRoles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireSquadType                 InSquadType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USQRoleSettings*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class USQRoleSettings*> UWireTeamInfo::GetSquadRoles(EWireSquadType InSquadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamInfo.GetSquadRoles");

	UWireTeamInfo_GetSquadRoles_Params params;
	params.InSquadType = InSquadType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamInfo.GetRadialModal
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASQPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanBuild                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UWireTeamInfo::GetRadialModal(class ASQPlayerState* PlayerState, bool bCanBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamInfo.GetRadialModal");

	UWireTeamInfo_GetRadialModal_Params params;
	params.PlayerState = PlayerState;
	params.bCanBuild = bCanBuild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamInfo.GetDefaultRoles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USQRoleSettings*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class USQRoleSettings*> UWireTeamInfo::GetDefaultRoles()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamInfo.GetDefaultRoles");

	UWireTeamInfo_GetDefaultRoles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamState.OnNewCommander
// (Native, Public)
// Parameters:
// class ASQSquad*                Squad                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASQPlayerController*     PC                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTeamState::OnNewCommander(class ASQSquad* Squad, class ASQPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamState.OnNewCommander");

	AWireTeamState_OnNewCommander_Params params;
	params.Squad = Squad;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTeamState.OnCommandSquadDestroyed
// (Native, Public)
// Parameters:
// class AWireSquadState*         CommandSquad                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTeamState::OnCommandSquadDestroyed(class AWireSquadState* CommandSquad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamState.OnCommandSquadDestroyed");

	AWireTeamState_OnCommandSquadDestroyed_Params params;
	params.CommandSquad = CommandSquad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTeamState.HasSquadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireSquadType                 SquadType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireTeamState::HasSquadType(EWireSquadType SquadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamState.HasSquadType");

	AWireTeamState_HasSquadType_Params params;
	params.SquadType = SquadType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamState.HasSquadRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USQRoleSettings*         RoleSetting                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWireSquadType                 SquadType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireTeamState::HasSquadRole(class USQRoleSettings* RoleSetting, EWireSquadType SquadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamState.HasSquadRole");

	AWireTeamState_HasSquadRole_Params params;
	params.RoleSetting = RoleSetting;
	params.SquadType = SquadType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamState.GetSquadTotal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireSquadType                 InSquadType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AWireTeamState::GetSquadTotal(EWireSquadType InSquadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamState.GetSquadTotal");

	AWireTeamState_GetSquadTotal_Params params;
	params.InSquadType = InSquadType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTeamState.GetSquadNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWireSquadType                 InSquadType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AWireTeamState::GetSquadNum(EWireSquadType InSquadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTeamState.GetSquadNum");

	AWireTeamState_GetSquadNum_Params params;
	params.InSquadType = InSquadType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesObjective.OnRep_IsObjectiveComplete
// (Native, Protected)
void AWireTidesObjective::OnRep_IsObjectiveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.OnRep_IsObjectiveComplete");

	AWireTidesObjective_OnRep_IsObjectiveComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesObjective.OnRep_IsObjectiveActive
// (Native, Protected)
void AWireTidesObjective::OnRep_IsObjectiveActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.OnRep_IsObjectiveActive");

	AWireTidesObjective_OnRep_IsObjectiveActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesObjective.OnObjectiveComplete
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesObjective::OnObjectiveComplete(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.OnObjectiveComplete");

	AWireTidesObjective_OnObjectiveComplete_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesObjective.OnObjectiveActiveChanged
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
void AWireTidesObjective::OnObjectiveActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.OnObjectiveActiveChanged");

	AWireTidesObjective_OnObjectiveActiveChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesObjective.OnClientObjectiveCompleteChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AWireTidesObjective::OnClientObjectiveCompleteChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.OnClientObjectiveCompleteChanged");

	AWireTidesObjective_OnClientObjectiveCompleteChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesObjective.OnClientObjectiveActiveChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AWireTidesObjective::OnClientObjectiveActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.OnClientObjectiveActiveChanged");

	AWireTidesObjective_OnClientObjectiveActiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesObjective.GetObjectiveMarkerDisplay
// (Native, Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDisplayToAll                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  OutTeam                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesObjective::GetObjectiveMarkerDisplay(bool* bDisplayToAll, unsigned char* OutTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesObjective.GetObjectiveMarkerDisplay");

	AWireTidesObjective_GetObjectiveMarkerDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bDisplayToAll != nullptr)
		*bDisplayToAll = params.bDisplayToAll;
	if (OutTeam != nullptr)
		*OutTeam = params.OutTeam;

}


// Function WireGame.WireTidesCaptureObjective.OnCaptureStateChanged
// (Final, Native, Protected)
// Parameters:
// class USQCaptureZoneComponent* CaptureZone                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesCaptureObjective::OnCaptureStateChanged(class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesCaptureObjective.OnCaptureStateChanged");

	AWireTidesCaptureObjective_OnCaptureStateChanged_Params params;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesCaptureObjective.CanTeamCapture
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireTidesCaptureObjective::CanTeamCapture(unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesCaptureObjective.CanTeamCapture");

	AWireTidesCaptureObjective_CanTeamCapture_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesCaptureObjectiveRuleset.OnCaptureStateChanged
// (Native, Protected)
// Parameters:
// class AWireTidesCaptureObjective* Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USQCaptureZoneComponent* CaptureZone                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesCaptureObjectiveRuleset::OnCaptureStateChanged(class AWireTidesCaptureObjective* Objective, class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesCaptureObjectiveRuleset.OnCaptureStateChanged");

	AWireTidesCaptureObjectiveRuleset_OnCaptureStateChanged_Params params;
	params.Objective = Objective;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesDestroyObjective.GetMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* AWireTidesDestroyObjective::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesDestroyObjective.GetMesh");

	AWireTidesDestroyObjective_GetMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesDestroyObjective.GetDestroyedMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* AWireTidesDestroyObjective::GetDestroyedMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesDestroyObjective.GetDestroyedMesh");

	AWireTidesDestroyObjective_GetDestroyedMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesDestroyObjective.AllPlayDamageEffects
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class UClass*                  DamageClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesDestroyObjective::AllPlayDamageEffects(class UClass* DamageClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesDestroyObjective.AllPlayDamageEffects");

	AWireTidesDestroyObjective_AllPlayDamageEffects_Params params;
	params.DamageClass = DamageClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesDestroyObjectiveRuleset.OnObjectiveDestroyed
// (Native, Protected)
// Parameters:
// class AWireTidesDestroyObjective* Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesDestroyObjectiveRuleset::OnObjectiveDestroyed(class AWireTidesDestroyObjective* Objective, class AController* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesDestroyObjectiveRuleset.OnObjectiveDestroyed");

	AWireTidesDestroyObjectiveRuleset_OnObjectiveDestroyed_Params params;
	params.Objective = Objective;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesFlagStatusWidget.InitWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWireTidesSector*        InSector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireTidesFlagStatusWidget::InitWidget(class AWireTidesSector* InSector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesFlagStatusWidget.InitWidget");

	UWireTidesFlagStatusWidget_InitWidget_Params params;
	params.InSector = InSector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWireTidesFlagStatusWidget::GetFlagProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressPercent");

	UWireTidesFlagStatusWidget_GetFlagProgressPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressBarStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FProgressBarStyle       ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FProgressBarStyle UWireTidesFlagStatusWidget::GetFlagProgressBarStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressBarStyle");

	UWireTidesFlagStatusWidget_GetFlagProgressBarStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressBar
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UProgressBar* UWireTidesFlagStatusWidget::GetFlagProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesFlagStatusWidget.GetFlagProgressBar");

	UWireTidesFlagStatusWidget_GetFlagProgressBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesGameMode.GetGameplayManager
// (Native, Public, BlueprintCallable)
// Parameters:
// class AWireTidesRulesetState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWireTidesRulesetState* AWireTidesGameMode::GetGameplayManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesGameMode.GetGameplayManager");

	AWireTidesGameMode_GetGameplayManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesMapWidgetCaptureZone.UpdateCurrentSector
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UWireTidesMapWidgetCaptureZone::UpdateCurrentSector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesMapWidgetCaptureZone.UpdateCurrentSector");

	UWireTidesMapWidgetCaptureZone_UpdateCurrentSector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesPlayableArea.TidesStateChanged
// (Native, Protected)
// Parameters:
// EWireTidesMatchState           NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWireTidesMatchState           LastState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesPlayableArea::TidesStateChanged(EWireTidesMatchState NewState, EWireTidesMatchState LastState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesPlayableArea.TidesStateChanged");

	AWireTidesPlayableArea_TidesStateChanged_Params params;
	params.NewState = NewState;
	params.LastState = LastState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.OnSectorStateChanged
// (Native, Protected)
// Parameters:
// class AWireTidesSector*        Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USQCaptureZoneComponent* CaptureZone                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::OnSectorStateChanged(class AWireTidesSector* Sector, class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.OnSectorStateChanged");

	AWireTidesRulesetState_OnSectorStateChanged_Params params;
	params.Sector = Sector;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.OnSectorFrontline
// (Native, Protected)
// Parameters:
// class AWireTidesSector*        Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::OnSectorFrontline(class AWireTidesSector* Sector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.OnSectorFrontline");

	AWireTidesRulesetState_OnSectorFrontline_Params params;
	params.Sector = Sector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.OnSectorContested
// (Native, Protected)
// Parameters:
// class AWireTidesSector*        Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ContestingTeam                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::OnSectorContested(class AWireTidesSector* Sector, unsigned char ContestingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.OnSectorContested");

	AWireTidesRulesetState_OnSectorContested_Params params;
	params.Sector = Sector;
	params.ContestingTeam = ContestingTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.OnRep_TidesState
// (Native, Protected)
// Parameters:
// EWireTidesMatchState           LastTidesState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::OnRep_TidesState(EWireTidesMatchState LastTidesState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.OnRep_TidesState");

	AWireTidesRulesetState_OnRep_TidesState_Params params;
	params.LastTidesState = LastTidesState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.OnObjectiveCompleted
// (Native, Protected)
// Parameters:
// class AWireTidesObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::OnObjectiveCompleted(class AWireTidesObjective* Objective, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.OnObjectiveCompleted");

	AWireTidesRulesetState_OnObjectiveCompleted_Params params;
	params.Objective = Objective;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.MulticastSectorContested
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class AWireTidesSector*        Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ContestingTeam                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::MulticastSectorContested(class AWireTidesSector* Sector, unsigned char ContestingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.MulticastSectorContested");

	AWireTidesRulesetState_MulticastSectorContested_Params params;
	params.Sector = Sector;
	params.ContestingTeam = ContestingTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.MulticastPhaseStarted
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class AWireTidesSector*        Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWireTidesSector*        OtherSector                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::MulticastPhaseStarted(class AWireTidesSector* Sector, class AWireTidesSector* OtherSector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.MulticastPhaseStarted");

	AWireTidesRulesetState_MulticastPhaseStarted_Params params;
	params.Sector = Sector;
	params.OtherSector = OtherSector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.MulticastPhaseEnded
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class AWireTidesSector*        Sector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  WinningTeam                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWirePhaseEndReason            EndReason                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::MulticastPhaseEnded(class AWireTidesSector* Sector, unsigned char WinningTeam, EWirePhaseEndReason EndReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.MulticastPhaseEnded");

	AWireTidesRulesetState_MulticastPhaseEnded_Params params;
	params.Sector = Sector;
	params.WinningTeam = WinningTeam;
	params.EndReason = EndReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.MulticastObjectiveCompleted
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class AWireTidesObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesRulesetState::MulticastObjectiveCompleted(class AWireTidesObjective* Objective, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.MulticastObjectiveCompleted");

	AWireTidesRulesetState_MulticastObjectiveCompleted_Params params;
	params.Objective = Objective;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesRulesetState.GetTeamPhaseWins
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AWireTidesRulesetState::GetTeamPhaseWins(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.GetTeamPhaseWins");

	AWireTidesRulesetState_GetTeamPhaseWins_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesRulesetState.GetRemainingPrepTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireTidesRulesetState::GetRemainingPrepTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.GetRemainingPrepTime");

	AWireTidesRulesetState_GetRemainingPrepTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesRulesetState.GetRemainingPhaseTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireTidesRulesetState::GetRemainingPhaseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.GetRemainingPhaseTime");

	AWireTidesRulesetState_GetRemainingPhaseTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesRulesetState.GetElapsedPrepTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireTidesRulesetState::GetElapsedPrepTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.GetElapsedPrepTime");

	AWireTidesRulesetState_GetElapsedPrepTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesRulesetState.GetElapsedPhaseTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AWireTidesRulesetState::GetElapsedPhaseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesRulesetState.GetElapsedPhaseTime");

	AWireTidesRulesetState_GetElapsedPhaseTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesSectionCaptureComponent.OnTidesStateChanged
// (Native, Public)
// Parameters:
// EWireTidesMatchState           NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EWireTidesMatchState           LastState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireTidesSectionCaptureComponent::OnTidesStateChanged(EWireTidesMatchState NewState, EWireTidesMatchState LastState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSectionCaptureComponent.OnTidesStateChanged");

	UWireTidesSectionCaptureComponent_OnTidesStateChanged_Params params;
	params.NewState = NewState;
	params.LastState = LastState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesSectionCaptureComponent.OnRep_CurrentSector
// (Final, Native, Public)
void UWireTidesSectionCaptureComponent::OnRep_CurrentSector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSectionCaptureComponent.OnRep_CurrentSector");

	UWireTidesSectionCaptureComponent_OnRep_CurrentSector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesSector.SetCurrentSector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesSector::SetCurrentSector(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSector.SetCurrentSector");

	AWireTidesSector_SetCurrentSector_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesSector.OnFlagStateChange
// (Native, Protected)
// Parameters:
// class USQCaptureZoneComponent* CaptureZone                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesSector::OnFlagStateChange(class USQCaptureZoneComponent* CaptureZone, unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSector.OnFlagStateChange");

	AWireTidesSector_OnFlagStateChange_Params params;
	params.CaptureZone = CaptureZone;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesSector.OnFlagContested
// (Native, Protected)
// Parameters:
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireTidesSector::OnFlagContested(unsigned char Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSector.OnFlagContested");

	AWireTidesSector_OnFlagContested_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesSector.GetObjectives
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bCanBeActivated                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AWireTidesObjective*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AWireTidesObjective*> AWireTidesSector::GetObjectives(bool bCanBeActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSector.GetObjectives");

	AWireTidesSector_GetObjectives_Params params;
	params.bCanBeActivated = bCanBeActivated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesSector.GetActualOwningTeam
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AWireTidesSector::GetActualOwningTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSector.GetActualOwningTeam");

	AWireTidesSector_GetActualOwningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesSectorWidget.UpdateFrontlineSectors
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UWireTidesSectorWidget::UpdateFrontlineSectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSectorWidget.UpdateFrontlineSectors");

	UWireTidesSectorWidget_UpdateFrontlineSectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireTidesSectorWidget.GetNMLOwner
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UWireTidesSectorWidget::GetNMLOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSectorWidget.GetNMLOwner");

	UWireTidesSectorWidget_GetNMLOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireTidesSectorWidget.AddSectorWidget
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWireTidesSector*        NewSector                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWireTidesSectorWidget::AddSectorWidget(class AWireTidesSector* NewSector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireTidesSectorWidget.AddSectorWidget");

	UWireTidesSectorWidget_AddSectorWidget_Params params;
	params.NewSector = NewSector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireUsableMeshActor.SetOwningTeam
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// ESQTeam                        NewTeam                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWireUsableMeshActor::SetOwningTeam(ESQTeam NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireUsableMeshActor.SetOwningTeam");

	AWireUsableMeshActor_SetOwningTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireUsableMeshActor.CanUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AWireUsableMeshActor::CanUse(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireUsableMeshActor.CanUse");

	AWireUsableMeshActor_CanUse_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireWorldMarker.RemoveMarker
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AWireWorldMarker::RemoveMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireWorldMarker.RemoveMarker");

	AWireWorldMarker_RemoveMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WireGame.WireWorldMarker.GetMarkerTexture
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* AWireWorldMarker::GetMarkerTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireWorldMarker.GetMarkerTexture");

	AWireWorldMarker_GetMarkerTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireWorldMarker.GetMarkerColor
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor AWireWorldMarker::GetMarkerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireWorldMarker.GetMarkerColor");

	AWireWorldMarker_GetMarkerColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WireGame.WireWorldMarker.DrawMarker
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AWireWorldMarker::DrawMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function WireGame.WireWorldMarker.DrawMarker");

	AWireWorldMarker_DrawMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
