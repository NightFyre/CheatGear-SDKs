/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DE4540
	 * 		Name   -> Function AnimNotify_BlendOutAnim.AnimNotify_BlendOutAnim_C.Received_Notify
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      bpp__MeshComp__pf                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           bpp__Animation__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAnimNotify_BlendOutAnim_C::Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BlendOutAnim.AnimNotify_BlendOutAnim_C.Received_Notify");
		
		UAnimNotify_BlendOutAnim_C_Received_Notify_Params params {};
		params.bpp__MeshComp__pf = bpp__MeshComp__pf;
		params.bpp__Animation__pf = bpp__Animation__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_BlendOutAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_BlendOutAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass AnimNotify_BlendOutAnim.AnimNotify_BlendOutAnim_C");
		return ptr;
	}

}


