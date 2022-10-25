/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxRenderableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxRenderableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PortalSystem.BoxRenderableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmptyRenderableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmptyRenderableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PortalSystem.EmptyRenderableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.RegisterOccluder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPortalSystemOccluderComponent*              occluder                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APortalSystemManager::RegisterOccluder(class UPortalSystemOccluderComponent* occluder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.RegisterOccluder");
		
		APortalSystemManager_RegisterOccluder_Params params {};
		params.occluder = occluder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.RebuildPortalSystemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               fromBeginPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APortalSystemManager::RebuildPortalSystemData(bool fromBeginPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.RebuildPortalSystemData");
		
		APortalSystemManager_RebuildPortalSystemData_Params params {};
		params.fromBeginPlay = fromBeginPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.OnZonesVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class APortalSystemZone*>                   zonesNewlyEnabled                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class APortalSystemZone*>                   zonesNewlyDisabled                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void APortalSystemManager::OnZonesVisibilityChanged(TArray<class APortalSystemZone*> zonesNewlyEnabled, TArray<class APortalSystemZone*> zonesNewlyDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.OnZonesVisibilityChanged");
		
		APortalSystemManager_OnZonesVisibilityChanged_Params params {};
		params.zonesNewlyEnabled = zonesNewlyEnabled;
		params.zonesNewlyDisabled = zonesNewlyDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.NotifyLightMoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULightComponent*                             LightComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APortalSystemManager::NotifyLightMoved(class ULightComponent* LightComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.NotifyLightMoved");
		
		APortalSystemManager_NotifyLightMoved_Params params {};
		params.LightComponent = LightComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.GetPortalSystemManagerInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APortalSystemManager* APortalSystemManager::GetPortalSystemManagerInstance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.GetPortalSystemManagerInstance");
		
		APortalSystemManager_GetPortalSystemManagerInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.ForceUpdatePortalSystem
	 * 		Flags  -> ()
	 */
	void APortalSystemManager::ForceUpdatePortalSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.ForceUpdatePortalSystem");
		
		APortalSystemManager_ForceUpdatePortalSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.AddLightFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APortalSystemManager::AddLightFromActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.AddLightFromActor");
		
		APortalSystemManager_AddLightFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemManager.AddLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULightComponent*                             LightComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APortalSystemManager::AddLight(class ULightComponent* LightComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemManager.AddLight");
		
		APortalSystemManager_AddLight_Params params {};
		params.LightComponent = LightComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APortalSystemManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APortalSystemManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PortalSystem.PortalSystemManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPortalSystemOccluderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPortalSystemOccluderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PortalSystem.PortalSystemOccluderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APortalSystemPortal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APortalSystemPortal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PortalSystem.PortalSystemPortal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemZone.OnZoneVisibilityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               newVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APortalSystemZone::OnZoneVisibilityChange(bool newVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemZone.OnZoneVisibilityChange");
		
		APortalSystemZone_OnZoneVisibilityChange_Params params {};
		params.newVisibility = newVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemZone.IsZoneVisible
	 * 		Flags  -> ()
	 */
	bool APortalSystemZone::IsZoneVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemZone.IsZoneVisible");
		
		APortalSystemZone_IsZoneVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PortalSystem.PortalSystemZone.ContainPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool APortalSystemZone::ContainPoint(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PortalSystem.PortalSystemZone.ContainPoint");
		
		APortalSystemZone_ContainPoint_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APortalSystemZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APortalSystemZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PortalSystem.PortalSystemZone");
		return ptr;
	}

}


