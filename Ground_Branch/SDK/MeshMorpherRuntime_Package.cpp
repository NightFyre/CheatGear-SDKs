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
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.RemoveMorphTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshMorpherRuntimeLibrary::RemoveMorphTarget(class USkeletalMesh* SkeletalMesh, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.RemoveMorphTarget");
		
		UMeshMorpherRuntimeLibrary_RemoveMorphTarget_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.FindMorphTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMorphTarget* UMeshMorpherRuntimeLibrary::FindMorphTarget(class USkeletalMesh* SkeletalMesh, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.FindMorphTarget");
		
		UMeshMorpherRuntimeLibrary_FindMorphTarget_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeSingleStandalone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStandaloneMorphTarget*                      MorphTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMeshMorpherBakeBranches                           Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshMorpherRuntimeLibrary::DoBakeSingleStandalone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, class UStandaloneMorphTarget* MorphTarget, float Weight, EMeshMorpherBakeBranches* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeSingleStandalone");
		
		UMeshMorpherRuntimeLibrary_DoBakeSingleStandalone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.SkeletalMesh = SkeletalMesh;
		params.MorphTarget = MorphTarget;
		params.Weight = Weight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMorphTarget*                                MorphTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMeshMorpherBakeBranches                           Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshMorpherRuntimeLibrary::DoBakeSingle(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, class UMorphTarget* MorphTarget, float Weight, EMeshMorpherBakeBranches* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeSingle");
		
		UMeshMorpherRuntimeLibrary_DoBakeSingle_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.SkeletalMesh = SkeletalMesh;
		params.MorphTarget = MorphTarget;
		params.Weight = Weight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeMultipleStandalone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class UStandaloneMorphTarget*, float>         MorphTargets                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EMeshMorpherBakeBranches                           Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshMorpherRuntimeLibrary::DoBakeMultipleStandalone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, TMap<class UStandaloneMorphTarget*, float> MorphTargets, EMeshMorpherBakeBranches* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeMultipleStandalone");
		
		UMeshMorpherRuntimeLibrary_DoBakeMultipleStandalone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.SkeletalMesh = SkeletalMesh;
		params.MorphTargets = MorphTargets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class UMorphTarget*, float>                   MorphTargets                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EMeshMorpherBakeBranches                           Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshMorpherRuntimeLibrary::DoBakeMultiple(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class USkeletalMesh* SkeletalMesh, TMap<class UMorphTarget*, float> MorphTargets, EMeshMorpherBakeBranches* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeMultiple");
		
		UMeshMorpherRuntimeLibrary_DoBakeMultiple_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.SkeletalMesh = SkeletalMesh;
		params.MorphTargets = MorphTargets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshMorpherRuntimeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshMorpherRuntimeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshMorpherRuntime.MeshMorpherRuntimeLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.WaitToFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMeshMorpherWorkerRef                       WorkerReference                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshMorpherWorkerLibrary::WaitToFinish(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.WaitToFinish");
		
		UMeshMorpherWorkerLibrary_WaitToFinish_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorkerReference = WorkerReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMeshMorpherWorkerRef                       WorkerReference                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshMorpherWorkerLibrary::IsValid(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsValid");
		
		UMeshMorpherWorkerLibrary_IsValid_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorkerReference = WorkerReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMeshMorpherWorkerRef                       WorkerReference                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshMorpherWorkerLibrary::IsRunning(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsRunning");
		
		UMeshMorpherWorkerLibrary_IsRunning_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorkerReference = WorkerReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsCanceled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMeshMorpherWorkerRef                       WorkerReference                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMeshMorpherWorkerLibrary::IsCanceled(class UObject* WorldContextObject, const struct FMeshMorpherWorkerRef& WorkerReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsCanceled");
		
		UMeshMorpherWorkerLibrary_IsCanceled_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorkerReference = WorkerReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.Cancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMeshMorpherWorkerRef                       WorkerReference                                            (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshMorpherWorkerLibrary::Cancel(class UObject* WorldContextObject, struct FMeshMorpherWorkerRef* WorkerReference, bool* bIsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshMorpherRuntime.MeshMorpherWorkerLibrary.Cancel");
		
		UMeshMorpherWorkerLibrary_Cancel_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorkerReference != nullptr)
			*WorkerReference = params.WorkerReference;
		if (bIsSuccess != nullptr)
			*bIsSuccess = params.bIsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshMorpherWorkerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshMorpherWorkerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshMorpherRuntime.MeshMorpherWorkerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStandaloneMorphTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandaloneMorphTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshMorpherRuntime.StandaloneMorphTarget");
		return ptr;
	}

}


