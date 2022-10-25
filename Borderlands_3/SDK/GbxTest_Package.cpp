/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UAssetTrait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTrait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTrait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTraitMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTraitMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTraitMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTraitMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTraitMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTraitMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTraitParticleSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTraitParticleSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTraitParticleSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTraitSkeletalMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTraitSkeletalMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTraitSkeletalMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTraitStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTraitStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTraitStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTraitTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTraitTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AssetTraitTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668C10
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.PrevPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationMenuHelper::PrevPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.PrevPage");
		
		UAutomationMenuHelper_PrevPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668BD0
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.PageName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FName UAutomationMenuHelper::PageName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.PageName");
		
		UAutomationMenuHelper_PageName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668BA0
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.NumPages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UAutomationMenuHelper::NumPages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.NumPages");
		
		UAutomationMenuHelper_NumPages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668B80
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.NextPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationMenuHelper::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.NextPage");
		
		UAutomationMenuHelper_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668B00
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.NextFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EAutomationUIDirection                             Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationMenuHelper::NextFocus(EAutomationUIDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.NextFocus");
		
		UAutomationMenuHelper_NextFocus_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668AC0
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.MenuName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FName UAutomationMenuHelper::MenuName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.MenuName");
		
		UAutomationMenuHelper_MenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668A90
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.HasOpenMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UAutomationMenuHelper::HasOpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.HasOpenMenu");
		
		UAutomationMenuHelper_HasOpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668670
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.FocusName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FName UAutomationMenuHelper::FocusName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.FocusName");
		
		UAutomationMenuHelper_FocusName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668590
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.FocusInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FAutomationMenuFocusInfo UAutomationMenuHelper::FocusInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.FocusInfo");
		
		UAutomationMenuHelper_FocusInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668310
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.CurrentDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UAutomationMenuHelper::CurrentDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.CurrentDepth");
		
		UAutomationMenuHelper_CurrentDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668120
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.CreateAutomationMenuHelper
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SimulateAllInputs                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAutomationMenuHelper* UAutomationMenuHelper::STATIC_CreateAutomationMenuHelper(class AGbxPlayerController* PlayerController, bool SimulateAllInputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.CreateAutomationMenuHelper");
		
		UAutomationMenuHelper_CreateAutomationMenuHelper_Params params {};
		params.PlayerController = PlayerController;
		params.SimulateAllInputs = SimulateAllInputs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00667C90
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.BackOut
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAutomationMenuHelper::BackOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.BackOut");
		
		UAutomationMenuHelper_BackOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00667970
	 * 		Name   -> Function GbxTest.AutomationMenuHelper.ActuateFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EAutomationUIAction                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationMenuHelper::ActuateFocus(EAutomationUIAction Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.ActuateFocus");
		
		UAutomationMenuHelper_ActuateFocus_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationMenuHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationMenuHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AutomationMenuHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006686B0
	 * 		Name   -> Function GbxTest.AutomationUILibrary.ForceDisableTutorials
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ForceDisable                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationUILibrary::STATIC_ForceDisableTutorials(bool ForceDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationUILibrary.ForceDisableTutorials");
		
		UAutomationUILibrary_ForceDisableTutorials_Params params {};
		params.ForceDisable = ForceDisable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationUILibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationUILibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.AutomationUILibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestContentAuditCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestContentAuditCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestContentAuditCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestJiraCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestJiraCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestJiraCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestContentAuditSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestContentAuditSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestContentAuditSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestParticleMaterialAuditCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestParticleMaterialAuditCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestParticleMaterialAuditCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669680
	 * 		Name   -> Function GbxTest.PerfMapCapture.SavePerfMapCapturesFromConfiguration
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMapParameters                              Configuration                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPerfMapCapture::STATIC_SavePerfMapCapturesFromConfiguration(class UWorld* World, const class FString& Path, const struct FMapParameters& Configuration, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.PerfMapCapture.SavePerfMapCapturesFromConfiguration");
		
		UPerfMapCapture_SavePerfMapCapturesFromConfiguration_Params params {};
		params.World = World;
		params.Path = Path;
		params.Configuration = Configuration;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669290
	 * 		Name   -> Function GbxTest.PerfMapCapture.SavePerfMapCaptures
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Density                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLighting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSpecular                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeZ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutputPattern                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerfMapCapture::STATIC_SavePerfMapCaptures(class UObject* World, const class FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int32_t Width, int32_t Height, float VolumeX, float VolumeY, float VolumeZ, const class FString& OutputPattern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.PerfMapCapture.SavePerfMapCaptures");
		
		UPerfMapCapture_SavePerfMapCaptures_Params params {};
		params.World = World;
		params.Path = Path;
		params.Density = Density;
		params.bLighting = bLighting;
		params.bSpecular = bSpecular;
		params.Gamma = Gamma;
		params.Width = Width;
		params.Height = Height;
		params.VolumeX = VolumeX;
		params.VolumeY = VolumeY;
		params.VolumeZ = VolumeZ;
		params.OutputPattern = OutputPattern;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerfMapCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerfMapCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.PerfMapCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669270
	 * 		Name   -> Function GbxTest.PerformanceSnapshotCollector.ResetSnapshotProviders
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPerformanceSnapshotCollector::ResetSnapshotProviders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.ResetSnapshotProviders");
		
		UPerformanceSnapshotCollector_ResetSnapshotProviders_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006681E0
	 * 		Name   -> Function GbxTest.PerformanceSnapshotCollector.CreatePerformanceSnapshotCollector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StatSection                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESnapshotExecOutput                                ExecOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPerformanceSnapshotCollector* UPerformanceSnapshotCollector::STATIC_CreatePerformanceSnapshotCollector(const class FString& StatSection, ESnapshotExecOutput* ExecOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.CreatePerformanceSnapshotCollector");
		
		UPerformanceSnapshotCollector_CreatePerformanceSnapshotCollector_Params params {};
		params.StatSection = StatSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecOut != nullptr)
			*ExecOut = params.ExecOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00667FB0
	 * 		Name   -> Function GbxTest.PerformanceSnapshotCollector.CollectSnapshot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportContext                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPerformanceSnapshotCollector::CollectSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.CollectSnapshot");
		
		UPerformanceSnapshotCollector_CollectSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ReportContext = ReportContext;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00667CB0
	 * 		Name   -> Function GbxTest.PerformanceSnapshotCollector.CollectProbeSnapshot
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportContext                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProbeId                                 ProbeId                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Test                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxProbeExtraData>                  ExtraDataArray                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPerformanceSnapshotCollector::CollectProbeSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FGbxProbeId& ProbeId, const class FString& Test, TArray<struct FGbxProbeExtraData> ExtraDataArray, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.CollectProbeSnapshot");
		
		UPerformanceSnapshotCollector_CollectProbeSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ReportContext = ReportContext;
		params.ProbeId = ProbeId;
		params.Test = Test;
		params.ExtraDataArray = ExtraDataArray;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerformanceSnapshotCollector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerformanceSnapshotCollector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.PerformanceSnapshotCollector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006698C0
	 * 		Name   -> Function GbxTest.MatcherFunctionality.Size
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UMatcherFunctionality::Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.Size");
		
		UMatcherFunctionality_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668C30
	 * 		Name   -> Function GbxTest.MatcherFunctionality.Ready
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMatcherFunctionality::Ready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.Ready");
		
		UMatcherFunctionality_Ready_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668A10
	 * 		Name   -> Function GbxTest.MatcherFunctionality.GetSuffix
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UMatcherFunctionality::GetSuffix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetSuffix");
		
		UMatcherFunctionality_GetSuffix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668990
	 * 		Name   -> Function GbxTest.MatcherFunctionality.GetPrefix
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UMatcherFunctionality::GetPrefix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetPrefix");
		
		UMatcherFunctionality_GetPrefix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668900
	 * 		Name   -> Function GbxTest.MatcherFunctionality.GetPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMatcherFunctionality::GetPosition(int32_t Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetPosition");
		
		UMatcherFunctionality_GetPosition_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668830
	 * 		Name   -> Function GbxTest.MatcherFunctionality.GetMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMatcherFunctionality::GetMatch(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetMatch");
		
		UMatcherFunctionality_GetMatch_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668800
	 * 		Name   -> Function GbxTest.MatcherFunctionality.GetLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UMatcherFunctionality::GetLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetLength");
		
		UMatcherFunctionality_GetLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668730
	 * 		Name   -> Function GbxTest.MatcherFunctionality.GetAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMatcherFunctionality::GetAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetAtIndex");
		
		UMatcherFunctionality_GetAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668340
	 * 		Name   -> Function GbxTest.MatcherFunctionality.Empty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMatcherFunctionality::Empty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.Empty");
		
		UMatcherFunctionality_Empty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatcherFunctionality.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatcherFunctionality::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.MatcherFunctionality");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006690F0
	 * 		Name   -> Function GbxTest.RegexFunctionality.RegexSearch
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMatcherFunctionality*                       Matcher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Input                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URegexFunctionality::STATIC_RegexSearch(const struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexSearch");
		
		URegexFunctionality_RegexSearch_Params params {};
		params.Regex = Regex;
		params.Matcher = Matcher;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668F20
	 * 		Name   -> Function GbxTest.RegexFunctionality.RegexRepleace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Input                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Repleacement                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URegexFunctionality::STATIC_RegexRepleace(const struct FRegex& Regex, const class FString& Input, const class FString& Repleacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexRepleace");
		
		URegexFunctionality_RegexRepleace_Params params {};
		params.Regex = Regex;
		params.Input = Input;
		params.Repleacement = Repleacement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668C60
	 * 		Name   -> Function GbxTest.RegexFunctionality.RegexMatch2
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMatcherFunctionality*                       Matcher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Input                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URegexFunctionality::STATIC_RegexMatch2(const struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexMatch2");
		
		URegexFunctionality_RegexMatch2_Params params {};
		params.Regex = Regex;
		params.Matcher = Matcher;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668DE0
	 * 		Name   -> Function GbxTest.RegexFunctionality.RegexMatch
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Input                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URegexFunctionality::STATIC_RegexMatch(const struct FRegex& Regex, const class FString& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexMatch");
		
		URegexFunctionality_RegexMatch_Params params {};
		params.Regex = Regex;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00668370
	 * 		Name   -> Function GbxTest.RegexFunctionality.FindAll
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Return                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URegexFunctionality::STATIC_FindAll(const struct FRegex& Regex, const class FString& String, TArray<class FString>* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.FindAll");
		
		URegexFunctionality_FindAll_Params params {};
		params.Regex = Regex;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006679F0
	 * 		Name   -> Function GbxTest.RegexFunctionality.Assign2
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESyntaxOption                                      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URegexFunctionality::STATIC_Assign2(const struct FRegex& Regex, const class FString& Pattern, ESyntaxOption Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.Assign2");
		
		URegexFunctionality_Assign2_Params params {};
		params.Regex = Regex;
		params.Pattern = Pattern;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00667B60
	 * 		Name   -> Function GbxTest.RegexFunctionality.Assign
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRegex                                      Regex                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URegexFunctionality::STATIC_Assign(const struct FRegex& Regex, const class FString& Pattern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.Assign");
		
		URegexFunctionality_Assign_Params params {};
		params.Regex = Regex;
		params.Pattern = Pattern;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegexFunctionality.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegexFunctionality::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.RegexFunctionality");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestHierarchicalCommands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestHierarchicalCommands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestHierarchicalCommands");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066EEE0
	 * 		Name   -> Function GbxTest.TestLibrary.TakeScreenshot
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CustomFilename                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   OverrideResolution                                         (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowUI                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AddUniqueSuffix                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_TakeScreenshot(const class FString& CustomFilename, const struct FVector2D& OverrideResolution, bool ShowUI, bool AddUniqueSuffix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.TakeScreenshot");
		
		UTestLibrary_TakeScreenshot_Params params {};
		params.CustomFilename = CustomFilename;
		params.OverrideResolution = OverrideResolution;
		params.ShowUI = ShowUI;
		params.AddUniqueSuffix = AddUniqueSuffix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066ECF0
	 * 		Name   -> Function GbxTest.TestLibrary.SortStrings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Descending                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UTestLibrary::STATIC_SortStrings(TArray<class FString> Values, bool Descending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortStrings");
		
		UTestLibrary_SortStrings_Params params {};
		params.Values = Values;
		params.Descending = Descending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066EB80
	 * 		Name   -> Function GbxTest.TestLibrary.SortObjectsByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UObject*>                             Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Descending                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UTestLibrary::STATIC_SortObjectsByName(TArray<class UObject*> Values, bool Descending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortObjectsByName");
		
		UTestLibrary_SortObjectsByName_Params params {};
		params.Values = Values;
		params.Descending = Descending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066EA10
	 * 		Name   -> Function GbxTest.TestLibrary.SortIntegers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Descending                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UTestLibrary::STATIC_SortIntegers(TArray<int32_t> Values, bool Descending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortIntegers");
		
		UTestLibrary_SortIntegers_Params params {};
		params.Values = Values;
		params.Descending = Descending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066E8A0
	 * 		Name   -> Function GbxTest.TestLibrary.SortFloats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Descending                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UTestLibrary::STATIC_SortFloats(TArray<float> Values, bool Descending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortFloats");
		
		UTestLibrary_SortFloats_Params params {};
		params.Values = Values;
		params.Descending = Descending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066E700
	 * 		Name   -> Function GbxTest.TestLibrary.SimulateInputKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EVENTTYPE                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AmountDepressed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_SimulateInputKey(class APlayerController* PlayerController, const struct FKey& Key, EInputEvent EVENTTYPE, float AmountDepressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SimulateInputKey");
		
		UTestLibrary_SimulateInputKey_Params params {};
		params.PlayerController = PlayerController;
		params.Key = Key;
		params.EVENTTYPE = EVENTTYPE;
		params.AmountDepressed = AmountDepressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066E4F0
	 * 		Name   -> Function GbxTest.TestLibrary.SimulateInputAxis
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_SimulateInputAxis(class APlayerController* PlayerController, const struct FKey& Key, float Delta, float InterpTime, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SimulateInputAxis");
		
		UTestLibrary_SimulateInputAxis_Params params {};
		params.PlayerController = PlayerController;
		params.Key = Key;
		params.Delta = Delta;
		params.InterpTime = InterpTime;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066B930
	 * 		Name   -> Function GbxTest.TestLibrary.RemoveItemFromCollection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_RemoveItemFromCollection(const class FString& CollectionName, const class FString& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.RemoveItemFromCollection");
		
		UTestLibrary_RemoveItemFromCollection_Params params {};
		params.CollectionName = CollectionName;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066B810
	 * 		Name   -> Function GbxTest.TestLibrary.RemoveArrayFromCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              objectNames                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_RemoveArrayFromCollection(const class FString& CollectionName, TArray<class FString>* objectNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.RemoveArrayFromCollection");
		
		UTestLibrary_RemoveArrayFromCollection_Params params {};
		params.CollectionName = CollectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (objectNames != nullptr)
			*objectNames = params.objectNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066E300
	 * 		Name   -> Function GbxTest.TestLibrary.ReadFromIni
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Section                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Values                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_ReadFromIni(const class FString& Section, const class FString& Key, TArray<class FString>* Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.ReadFromIni");
		
		UTestLibrary_ReadFromIni_Params params {};
		params.Section = Section;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Values != nullptr)
			*Values = params.Values;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066E1D0
	 * 		Name   -> Function GbxTest.TestLibrary.MoveItemCollection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      fromCollection                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      toCollection                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_MoveItemCollection(const class FString& fromCollection, const class FString& toCollection, const class FString& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.MoveItemCollection");
		
		UTestLibrary_MoveItemCollection_Params params {};
		params.fromCollection = fromCollection;
		params.toCollection = toCollection;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066E060
	 * 		Name   -> Function GbxTest.TestLibrary.MoveArrayCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      fromCollection                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      toCollection                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              objectNames                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_MoveArrayCollection(const class FString& fromCollection, const class FString& toCollection, TArray<class FString>* objectNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.MoveArrayCollection");
		
		UTestLibrary_MoveArrayCollection_Params params {};
		params.fromCollection = fromCollection;
		params.toCollection = toCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (objectNames != nullptr)
			*objectNames = params.objectNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DF80
	 * 		Name   -> Function GbxTest.TestLibrary.LoadBlueprintAsset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_LoadBlueprintAsset(const class FString& Path, class UObject** Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.LoadBlueprintAsset");
		
		UTestLibrary_LoadBlueprintAsset_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Object != nullptr)
			*Object = params.Object;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DB80
	 * 		Name   -> Function GbxTest.TestLibrary.LoadAsset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_LoadAsset(const class FString& Path, class UObject** Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.LoadAsset");
		
		UTestLibrary_LoadAsset_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Object != nullptr)
			*Object = params.Object;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DB50
	 * 		Name   -> Function GbxTest.TestLibrary.IsEditorSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTestLibrary::STATIC_IsEditorSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.IsEditorSession");
		
		UTestLibrary_IsEditorSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DA20
	 * 		Name   -> Function GbxTest.TestLibrary.IsAssetInCollectionEx
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollectionType                                    CollectionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_IsAssetInCollectionEx(const class FString& CollectionName, ECollectionType CollectionType, const class FString& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.IsAssetInCollectionEx");
		
		UTestLibrary_IsAssetInCollectionEx_Params params {};
		params.CollectionName = CollectionName;
		params.CollectionType = CollectionType;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D930
	 * 		Name   -> Function GbxTest.TestLibrary.IsAssetInCollection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_IsAssetInCollection(const class FString& CollectionName, const class FString& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.IsAssetInCollection");
		
		UTestLibrary_IsAssetInCollection_Params params {};
		params.CollectionName = CollectionName;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D8B0
	 * 		Name   -> Function GbxTest.TestLibrary.GetWorldForActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorld* UTestLibrary::STATIC_GetWorldForActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetWorldForActor");
		
		UTestLibrary_GetWorldForActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066CE10
	 * 		Name   -> Function GbxTest.TestLibrary.GetTestDriversFromStrings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              Strings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              TestDrivers                                                (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		class FString                                      UndiscoveredItems                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_GetTestDriversFromStrings(TArray<class FString> Strings, TArray<class UClass*>* TestDrivers, class FString* UndiscoveredItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetTestDriversFromStrings");
		
		UTestLibrary_GetTestDriversFromStrings_Params params {};
		params.Strings = Strings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TestDrivers != nullptr)
			*TestDrivers = params.TestDrivers;
		if (UndiscoveredItems != nullptr)
			*UndiscoveredItems = params.UndiscoveredItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066CCF0
	 * 		Name   -> Function GbxTest.TestLibrary.GetReferencedBlueprintClasses
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              Classes                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_GetReferencedBlueprintClasses(class UObject* Object, class UClass* Class, TArray<class UClass*>* Classes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetReferencedBlueprintClasses");
		
		UTestLibrary_GetReferencedBlueprintClasses_Params params {};
		params.Object = Object;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Classes != nullptr)
			*Classes = params.Classes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066CC10
	 * 		Name   -> Function GbxTest.TestLibrary.GetObjectTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FObjectTag>                          ObjectTags                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_GetObjectTags(TArray<struct FObjectTag>* ObjectTags, class UObject* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetObjectTags");
		
		UTestLibrary_GetObjectTags_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectTags != nullptr)
			*ObjectTags = params.ObjectTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066CB30
	 * 		Name   -> Function GbxTest.TestLibrary.GetAssetPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetPath                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_GetAssetPath(class UObject* Asset, class FString* AssetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetAssetPath");
		
		UTestLibrary_GetAssetPath_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetPath != nullptr)
			*AssetPath = params.AssetPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066CA40
	 * 		Name   -> Function GbxTest.TestLibrary.GetAssetName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_GetAssetName(const class FString& AssetPath, class FString* AssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetAssetName");
		
		UTestLibrary_GetAssetName_Params params {};
		params.AssetPath = AssetPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetName != nullptr)
			*AssetName = params.AssetName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066C570
	 * 		Name   -> Function GbxTest.TestLibrary.FilterDiscoveredAssets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              InPathNames                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InPrettyNames                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutPathNames                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutPrettyNames                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetNamePrefix                                            (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetNamePostfix                                           (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetNameContains                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetPathContains                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_FilterDiscoveredAssets(TArray<class FString>* InPathNames, TArray<class FString>* InPrettyNames, TArray<class FString>* OutPathNames, TArray<class FString>* OutPrettyNames, const class FString& AssetNamePrefix, const class FString& AssetNamePostfix, const class FString& AssetNameContains, const class FString& AssetPathContains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.FilterDiscoveredAssets");
		
		UTestLibrary_FilterDiscoveredAssets_Params params {};
		params.AssetNamePrefix = AssetNamePrefix;
		params.AssetNamePostfix = AssetNamePostfix;
		params.AssetNameContains = AssetNameContains;
		params.AssetPathContains = AssetPathContains;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPathNames != nullptr)
			*InPathNames = params.InPathNames;
		if (InPrettyNames != nullptr)
			*InPrettyNames = params.InPrettyNames;
		if (OutPathNames != nullptr)
			*OutPathNames = params.OutPathNames;
		if (OutPrettyNames != nullptr)
			*OutPrettyNames = params.OutPrettyNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066C160
	 * 		Name   -> Function GbxTest.TestLibrary.DiscoverAssets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              PathNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PrettyNames                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Directories                                                (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              Classes                                                    (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              ExcludeRecursiveClasses                                    (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursiveDirectories                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursiveClasses                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_DiscoverAssets(TArray<class FString>* PathNames, TArray<class FString>* PrettyNames, TArray<class FString> Directories, TArray<class UClass*> Classes, TArray<class UClass*> ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.DiscoverAssets");
		
		UTestLibrary_DiscoverAssets_Params params {};
		params.Directories = Directories;
		params.Classes = Classes;
		params.ExcludeRecursiveClasses = ExcludeRecursiveClasses;
		params.bRecursiveDirectories = bRecursiveDirectories;
		params.bRecursiveClasses = bRecursiveClasses;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathNames != nullptr)
			*PathNames = params.PathNames;
		if (PrettyNames != nullptr)
			*PrettyNames = params.PrettyNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066C030
	 * 		Name   -> Function GbxTest.TestLibrary.CreateLocalCollection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ParentName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTestLibrary::STATIC_CreateLocalCollection(const class FString& CollectionName, const class FString& ParentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.CreateLocalCollection");
		
		UTestLibrary_CreateLocalCollection_Params params {};
		params.CollectionName = CollectionName;
		params.ParentName = ParentName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066BE70
	 * 		Name   -> Function GbxTest.TestLibrary.ContainsSubPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SubPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_ContainsSubPath(const class FString& Path, const class FString& SubPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.ContainsSubPath");
		
		UTestLibrary_ContainsSubPath_Params params {};
		params.Path = Path;
		params.SubPath = SubPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066BB90
	 * 		Name   -> Function GbxTest.TestLibrary.ContainsObjectTag
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FObjectTag>                          ObjectTags                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaseSensitiveCategory                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaseSensitiveName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_ContainsObjectTag(TArray<struct FObjectTag>* ObjectTags, const class FString& Category, const class FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.ContainsObjectTag");
		
		UTestLibrary_ContainsObjectTag_Params params {};
		params.Category = Category;
		params.Name = Name;
		params.bExactCategory = bExactCategory;
		params.bCaseSensitiveCategory = bCaseSensitiveCategory;
		params.bExactName = bExactName;
		params.bCaseSensitiveName = bCaseSensitiveName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectTags != nullptr)
			*ObjectTags = params.ObjectTags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066BAB0
	 * 		Name   -> Function GbxTest.TestLibrary.CollectionExistsEx
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollectionType                                    CollectionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_CollectionExistsEx(const class FString& CollectionName, ECollectionType CollectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.CollectionExistsEx");
		
		UTestLibrary_CollectionExistsEx_Params params {};
		params.CollectionName = CollectionName;
		params.CollectionType = CollectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066BA10
	 * 		Name   -> Function GbxTest.TestLibrary.CollectionExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrary::STATIC_CollectionExists(const class FString& CollectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.CollectionExists");
		
		UTestLibrary_CollectionExists_Params params {};
		params.CollectionName = CollectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066B930
	 * 		Name   -> Function GbxTest.TestLibrary.AddItemToCollection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_AddItemToCollection(const class FString& CollectionName, const class FString& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.AddItemToCollection");
		
		UTestLibrary_AddItemToCollection_Params params {};
		params.CollectionName = CollectionName;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066B810
	 * 		Name   -> Function GbxTest.TestLibrary.AddArrayToCollection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      CollectionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              objectNames                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibrary::STATIC_AddArrayToCollection(const class FString& CollectionName, TArray<class FString>* objectNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.AddArrayToCollection");
		
		UTestLibrary_AddArrayToCollection_Params params {};
		params.CollectionName = CollectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (objectNames != nullptr)
			*objectNames = params.objectNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DEE0
	 * 		Name   -> Function GbxTest.TestLibraryContent.LoadAssetTexture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ObjectPath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UTestLibraryContent::STATIC_LoadAssetTexture(const class FString& ObjectPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetTexture");
		
		UTestLibraryContent_LoadAssetTexture_Params params {};
		params.ObjectPath = ObjectPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DE40
	 * 		Name   -> Function GbxTest.TestLibraryContent.LoadAssetStaticMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ObjectPath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStaticMesh* UTestLibraryContent::STATIC_LoadAssetStaticMesh(const class FString& ObjectPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetStaticMesh");
		
		UTestLibraryContent_LoadAssetStaticMesh_Params params {};
		params.ObjectPath = ObjectPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DDA0
	 * 		Name   -> Function GbxTest.TestLibraryContent.LoadAssetSkeletalMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ObjectPath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMesh* UTestLibraryContent::STATIC_LoadAssetSkeletalMesh(const class FString& ObjectPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetSkeletalMesh");
		
		UTestLibraryContent_LoadAssetSkeletalMesh_Params params {};
		params.ObjectPath = ObjectPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DD00
	 * 		Name   -> Function GbxTest.TestLibraryContent.LoadAssetParticleSystem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ObjectPath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UParticleSystem* UTestLibraryContent::STATIC_LoadAssetParticleSystem(const class FString& ObjectPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetParticleSystem");
		
		UTestLibraryContent_LoadAssetParticleSystem_Params params {};
		params.ObjectPath = ObjectPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DC60
	 * 		Name   -> Function GbxTest.TestLibraryContent.LoadAssetMaterial
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ObjectPath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterial* UTestLibraryContent::STATIC_LoadAssetMaterial(const class FString& ObjectPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetMaterial");
		
		UTestLibraryContent_LoadAssetMaterial_Params params {};
		params.ObjectPath = ObjectPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D7D0
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UTexture*                                    Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoTexture                            Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoTexture(class UTexture* Asset, struct FTestInfoTexture* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoTexture");
		
		UTestLibraryContent_GetTestInfoTexture_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D6D0
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoStaticMeshLOD
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMesh*                                 Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMeshLOD                            Info                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoStaticMeshLOD(class UStaticMesh* Asset, int32_t LODIndex, struct FTestInfoMeshLOD* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoStaticMeshLOD");
		
		UTestLibraryContent_GetTestInfoStaticMeshLOD_Params params {};
		params.Asset = Asset;
		params.LODIndex = LODIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D530
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoStaticMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMesh*                                 Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMeshLODSummary                     LODSummary                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMesh                               Mesh                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoStaticMesh                         StaticMesh                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoStaticMesh(class UStaticMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoStaticMesh* StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoStaticMesh");
		
		UTestLibraryContent_GetTestInfoStaticMesh_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LODSummary != nullptr)
			*LODSummary = params.LODSummary;
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
		if (StaticMesh != nullptr)
			*StaticMesh = params.StaticMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D430
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMeshLOD
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMesh*                               Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMeshLOD                            Info                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoSkeletalMeshLOD(class USkeletalMesh* Asset, int32_t LODIndex, struct FTestInfoMeshLOD* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMeshLOD");
		
		UTestLibraryContent_GetTestInfoSkeletalMeshLOD_Params params {};
		params.Asset = Asset;
		params.LODIndex = LODIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D290
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMesh*                               Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMeshLODSummary                     LODSummary                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMesh                               Mesh                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoSkeletalMesh                       SkeletalMesh                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoSkeletalMesh(class USkeletalMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoSkeletalMesh* SkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMesh");
		
		UTestLibraryContent_GetTestInfoSkeletalMesh_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LODSummary != nullptr)
			*LODSummary = params.LODSummary;
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
		if (SkeletalMesh != nullptr)
			*SkeletalMesh = params.SkeletalMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D190
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoParticleSystem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UParticleSystem*                             Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoParticleSystem                     Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoParticleSystem(class UParticleSystem* Asset, struct FTestInfoParticleSystem* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoParticleSystem");
		
		UTestLibraryContent_GetTestInfoParticleSystem_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066D090
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoParticleEmitter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UParticleSystem*                             Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EmitterIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoParticleEmitter                    Info                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoParticleEmitter(class UParticleSystem* Asset, int32_t EmitterIndex, struct FTestInfoParticleEmitter* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoParticleEmitter");
		
		UTestLibraryContent_GetTestInfoParticleEmitter_Params params {};
		params.Asset = Asset;
		params.EmitterIndex = EmitterIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066CFB0
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetTestInfoMaterial
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMaterial*                                   Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTestInfoMaterial                           Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetTestInfoMaterial(class UMaterial* Asset, struct FTestInfoMaterial* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoMaterial");
		
		UTestLibraryContent_GetTestInfoMaterial_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066C930
	 * 		Name   -> Function GbxTest.TestLibraryContent.GetAllPersistentGameMaps
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              OutMapNames                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ShortNamesOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryContent::STATIC_GetAllPersistentGameMaps(TArray<class FString>* OutMapNames, bool ShortNamesOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetAllPersistentGameMaps");
		
		UTestLibraryContent_GetAllPersistentGameMaps_Params params {};
		params.ShortNamesOnly = ShortNamesOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMapNames != nullptr)
			*OutMapNames = params.OutMapNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066BF60
	 * 		Name   -> Function GbxTest.TestLibraryContent.ContentAuditSingleObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UTestLibraryContent::STATIC_ContentAuditSingleObject(class UObject* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.ContentAuditSingleObject");
		
		UTestLibraryContent_ContentAuditSingleObject_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestLibraryContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestLibraryContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestLibraryContent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00674250
	 * 		Name   -> Function GbxTest.TestLibraryPerformance.WaitForFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryPerformance::STATIC_WaitForFrames(class UObject* WorldContextObject, int32_t NumFrames, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryPerformance.WaitForFrames");
		
		UTestLibraryPerformance_WaitForFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NumFrames = NumFrames;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670C50
	 * 		Name   -> Function GbxTest.TestLibraryPerformance.GenerateLevelGrid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             GridLocations                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GridSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWalkableOnly                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibraryPerformance::STATIC_GenerateLevelGrid(TArray<struct FVector>* GridLocations, class APawn* Pawn, float GridSize, bool bWalkableOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryPerformance.GenerateLevelGrid");
		
		UTestLibraryPerformance_GenerateLevelGrid_Params params {};
		params.Pawn = Pawn;
		params.GridSize = GridSize;
		params.bWalkableOnly = bWalkableOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridLocations != nullptr)
			*GridLocations = params.GridLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestLibraryPerformance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestLibraryPerformance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestLibraryPerformance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00673FE0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.TestIntInRangeFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_TestIntInRangeFromPlayMap(int32_t Value, int32_t Min, int32_t Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestIntInRangeFromPlayMap");
		
		UTestLibrarySimulation_TestIntInRangeFromPlayMap_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00673B00
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.TestIntCompareFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompare                                           Comparison                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_TestIntCompareFromPlayMap(int32_t Value, int32_t Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestIntCompareFromPlayMap");
		
		UTestLibrarySimulation_TestIntCompareFromPlayMap_Params params {};
		params.Value = Value;
		params.Other = Other;
		params.Comparison = Comparison;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00673620
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.TestFloatInRangeFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_TestFloatInRangeFromPlayMap(float Value, float Min, float Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestFloatInRangeFromPlayMap");
		
		UTestLibrarySimulation_TestFloatInRangeFromPlayMap_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006730F0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.TestFloatCompareFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompare                                           Comparison                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_TestFloatCompareFromPlayMap(float Value, float Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestFloatCompareFromPlayMap");
		
		UTestLibrarySimulation_TestFloatCompareFromPlayMap_Params params {};
		params.Value = Value;
		params.Other = Other;
		params.Comparison = Comparison;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672C50
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.TestBoolIsTrueFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_TestBoolIsTrueFromPlayMap(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestBoolIsTrueFromPlayMap");
		
		UTestLibrarySimulation_TestBoolIsTrueFromPlayMap_Params params {};
		params.Value = Value;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672880
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.TestBoolIsFalseFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_TestBoolIsFalseFromPlayMap(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestBoolIsFalseFromPlayMap");
		
		UTestLibrarySimulation_TestBoolIsFalseFromPlayMap_Params params {};
		params.Value = Value;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006725F0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.StopPlayTest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTestLibrarySimulation::STATIC_StopPlayTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.StopPlayTest");
		
		UTestLibrarySimulation_StopPlayTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672360
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.SimulatePlayerInput
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxTestInputAction>                 InputDescription                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              PreDelay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PostDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_SimulatePlayerInput(class UObject* WorldContextObject, class APlayerController** PlayerController, TArray<struct FGbxTestInputAction> InputDescription, float PreDelay, float PostDelay, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.SimulatePlayerInput");
		
		UTestLibrarySimulation_SimulatePlayerInput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InputDescription = InputDescription;
		params.PreDelay = PreDelay;
		params.PostDelay = PostDelay;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672190
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.SetReportContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxProbeId>                         AssetContexts                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId> AssetContexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.SetReportContext");
		
		UTestLibrarySimulation_SetReportContext_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AssetContexts = AssetContexts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006720C0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.SetReceiveBackgroundInput
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllowBackgroundInput                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrarySimulation::STATIC_SetReceiveBackgroundInput(class APlayerController** PlayerController, bool AllowBackgroundInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.SetReceiveBackgroundInput");
		
		UTestLibrarySimulation_SetReceiveBackgroundInput_Params params {};
		params.AllowBackgroundInput = AllowBackgroundInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671F80
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.ResetTestTimeout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTestLibrarySimulation::STATIC_ResetTestTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.ResetTestTimeout");
		
		UTestLibrarySimulation_ResetTestTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671DC0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.ReportResultFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProbeId                                 AssetContext                                               (Parm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     FailedIssueType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_ReportResultFromPlayMap(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, ETestIssueType FailedIssueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.ReportResultFromPlayMap");
		
		UTestLibrarySimulation_ReportResultFromPlayMap_Params params {};
		params.bSucceeded = bSucceeded;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		params.AssetContext = AssetContext;
		params.FailedIssueType = FailedIssueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671A50
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.ReportIssueFromPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_ReportIssueFromPlayMap(ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.ReportIssueFromPlayMap");
		
		UTestLibrarySimulation_ReportIssueFromPlayMap_Params params {};
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671840
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.PushWorldContext
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_PushWorldContext(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PushWorldContext");
		
		UTestLibrarySimulation_PushWorldContext_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671710
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.PushAssetContext
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ID                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_PushAssetContext(const struct FGbxProbeId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PushAssetContext");
		
		UTestLibrarySimulation_PushAssetContext_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006716F0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.PopWorldContext
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTestLibrarySimulation::STATIC_PopWorldContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PopWorldContext");
		
		UTestLibrarySimulation_PopWorldContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006715C0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.PopAssetContext
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ID                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestLibrarySimulation::STATIC_PopAssetContext(const struct FGbxProbeId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PopAssetContext");
		
		UTestLibrarySimulation_PopAssetContext_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670F10
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.IsPlayMapRunning
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTestLibrarySimulation::STATIC_IsPlayMapRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsPlayMapRunning");
		
		UTestLibrarySimulation_IsPlayMapRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670E80
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.IsHLQNoClipEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrarySimulation::STATIC_IsHLQNoClipEnabled(class APlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsHLQNoClipEnabled");
		
		UTestLibrarySimulation_IsHLQNoClipEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670E80
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.IsGodEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrarySimulation::STATIC_IsGodEnabled(class APlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsGodEnabled");
		
		UTestLibrarySimulation_IsGodEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670E80
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.IsGhostEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrarySimulation::STATIC_IsGhostEnabled(class APlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsGhostEnabled");
		
		UTestLibrarySimulation_IsGhostEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670E80
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.IsDemiGodEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrarySimulation::STATIC_IsDemiGodEnabled(class APlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsDemiGodEnabled");
		
		UTestLibrarySimulation_IsDemiGodEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670DC0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.GetPolicyForPlayMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UTestPolicySimulation* UTestLibrarySimulation::STATIC_GetPolicyForPlayMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.GetPolicyForPlayMap");
		
		UTestLibrarySimulation_GetPolicyForPlayMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670BA0
	 * 		Name   -> Function GbxTest.TestLibrarySimulation.CanReceiveBackgroundInput
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestLibrarySimulation::STATIC_CanReceiveBackgroundInput(class APlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.CanReceiveBackgroundInput");
		
		UTestLibrarySimulation_CanReceiveBackgroundInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestLibrarySimulation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestLibrarySimulation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestLibrarySimulation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTestPlanCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTestPlanCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.GbxTestPlanCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00673D70
	 * 		Name   -> Function GbxTest.TestPolicy.TestIntInRange
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestIntInRange(int32_t Value, int32_t Min, int32_t Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestIntInRange");
		
		UTestPolicy_TestIntInRange_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00673890
	 * 		Name   -> Function GbxTest.TestPolicy.TestIntCompare
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompare                                           Comparison                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestIntCompare(int32_t Value, int32_t Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestIntCompare");
		
		UTestPolicy_TestIntCompare_Params params {};
		params.Value = Value;
		params.Other = Other;
		params.Comparison = Comparison;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006733A0
	 * 		Name   -> Function GbxTest.TestPolicy.TestFloatInRange
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestFloatInRange(float Value, float Min, float Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestFloatInRange");
		
		UTestPolicy_TestFloatInRange_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672E30
	 * 		Name   -> Function GbxTest.TestPolicy.TestFloatCompare
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompare                                           Comparison                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestFloatCompare(float Value, float Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestFloatCompare");
		
		UTestPolicy_TestFloatCompare_Params params {};
		params.Value = Value;
		params.Other = Other;
		params.Comparison = Comparison;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672A60
	 * 		Name   -> Function GbxTest.TestPolicy.TestBoolIsTrue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestBoolIsTrue(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestBoolIsTrue");
		
		UTestPolicy_TestBoolIsTrue_Params params {};
		params.Value = Value;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672690
	 * 		Name   -> Function GbxTest.TestPolicy.TestBoolIsFalse
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestBoolIsFalse(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestBoolIsFalse");
		
		UTestPolicy_TestBoolIsFalse_Params params {};
		params.Value = Value;
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672610
	 * 		Name   -> Function GbxTest.TestPolicy.TestAssetTraits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestAssetTraits(class UObject* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestAssetTraits");
		
		UTestPolicy_TestAssetTraits_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672610
	 * 		Name   -> Function GbxTest.TestPolicy.TestAssetAudit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::TestAssetAudit(class UObject* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestAssetAudit");
		
		UTestPolicy_TestAssetAudit_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672270
	 * 		Name   -> Function GbxTest.TestPolicy.SetReportContext
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxProbeId>                         AssetContexts                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId> AssetContexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.SetReportContext");
		
		UTestPolicy_SetReportContext_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AssetContexts = AssetContexts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671BF0
	 * 		Name   -> Function GbxTest.TestPolicy.ReportResult
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProbeId                                 AssetContext                                               (Parm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETestIssueType                                     FailedIssueType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::ReportResult(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, ETestIssueType FailedIssueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.ReportResult");
		
		UTestPolicy_ReportResult_Params params {};
		params.bSucceeded = bSucceeded;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		params.AssetContext = AssetContext;
		params.FailedIssueType = FailedIssueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006718B0
	 * 		Name   -> Function GbxTest.TestPolicy.ReportIssue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETestIssueType                                     IssueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IssueMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::ReportIssue(ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.ReportIssue");
		
		UTestPolicy_ReportIssue_Params params {};
		params.IssueType = IssueType;
		params.IssueCategory = IssueCategory;
		params.IssueMessage = IssueMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006717A0
	 * 		Name   -> Function GbxTest.TestPolicy.PushAssetContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ID                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::PushAssetContext(const struct FGbxProbeId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.PushAssetContext");
		
		UTestPolicy_PushAssetContext_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671650
	 * 		Name   -> Function GbxTest.TestPolicy.PopAssetContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ID                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::PopAssetContext(const struct FGbxProbeId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.PopAssetContext");
		
		UTestPolicy_PopAssetContext_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006710B0
	 * 		Name   -> Function GbxTest.TestPolicy.OnRunTestCommand
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TestCommand                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::OnRunTestCommand(const class FString& TestCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.OnRunTestCommand");
		
		UTestPolicy_OnRunTestCommand_Params params {};
		params.TestCommand = TestCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670F40
	 * 		Name   -> Function GbxTest.TestPolicy.OnGetTestCommands
	 * 		Flags  -> (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<class FString>                              TestCommands                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PrettyNames                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UTestPolicy::OnGetTestCommands(TArray<class FString>* TestCommands, TArray<class FString>* PrettyNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.OnGetTestCommands");
		
		UTestPolicy_OnGetTestCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TestCommands != nullptr)
			*TestCommands = params.TestCommands;
		if (PrettyNames != nullptr)
			*PrettyNames = params.PrettyNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670C30
	 * 		Name   -> Function GbxTest.TestPolicy.ClearSavedTestCommand
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTestPolicy::ClearSavedTestCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.ClearSavedTestCommand");
		
		UTestPolicy_ClearSavedTestCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671150
	 * 		Name   -> Function GbxTest.TestPolicyContent.OnValidForImport
	 * 		Flags  -> (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     ImportObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicyContent::OnValidForImport(class UObject* ImportObject, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicyContent.OnValidForImport");
		
		UTestPolicyContent_OnValidForImport_Params params {};
		params.ImportObject = ImportObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestPolicyContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestPolicyContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestPolicyContent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006725D0
	 * 		Name   -> Function GbxTest.TestPolicySimulation.StopPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTestPolicySimulation::StopPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.StopPlay");
		
		UTestPolicySimulation_StopPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671FA0
	 * 		Name   -> Function GbxTest.TestPolicySimulation.RunTestDrivers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UClass*>                              TestDrivers                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicySimulation::RunTestDrivers(TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.RunTestDrivers");
		
		UTestPolicySimulation_RunTestDrivers_Params params {};
		params.TestDrivers = TestDrivers;
		params.Timeout = Timeout;
		params.TimeLimit = TimeLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006713C0
	 * 		Name   -> Function GbxTest.TestPolicySimulation.PlayTestMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              TestDrivers                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoadMapOnce                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoadMapIfNotLoaded                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicySimulation::PlayTestMap(const class FString& MapName, TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.PlayTestMap");
		
		UTestPolicySimulation_PlayTestMap_Params params {};
		params.MapName = MapName;
		params.TestDrivers = TestDrivers;
		params.Timeout = Timeout;
		params.TimeLimit = TimeLimit;
		params.bLoadMapOnce = bLoadMapOnce;
		params.bLoadMapIfNotLoaded = bLoadMapIfNotLoaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00671230
	 * 		Name   -> Function GbxTest.TestPolicySimulation.PlayMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              TestDrivers                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicySimulation::PlayMap(const class FString& MapName, TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.PlayMap");
		
		UTestPolicySimulation_PlayMap_Params params {};
		params.MapName = MapName;
		params.TestDrivers = TestDrivers;
		params.Timeout = Timeout;
		params.TimeLimit = TimeLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxTest.TestPolicySimulation.OnMapTraveled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      NewWorld                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicySimulation::OnMapTraveled(class UWorld* NewWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.OnMapTraveled");
		
		UTestPolicySimulation_OnMapTraveled_Params params {};
		params.NewWorld = NewWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670DF0
	 * 		Name   -> Function GbxTest.TestPolicySimulation.IntendToMapTravel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               WillMapTravel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicySimulation::IntendToMapTravel(bool WillMapTravel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.IntendToMapTravel");
		
		UTestPolicySimulation_IntendToMapTravel_Params params {};
		params.WillMapTravel = WillMapTravel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00670B20
	 * 		Name   -> Function GbxTest.TestPolicySimulation.AddTestDriver
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      TestDriver                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestPolicySimulation::AddTestDriver(class UClass* TestDriver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.AddTestDriver");
		
		UTestPolicySimulation_AddTestDriver_Params params {};
		params.TestDriver = TestDriver;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestPolicySimulation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestPolicySimulation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxTest.TestPolicySimulation");
		return ptr;
	}

}


