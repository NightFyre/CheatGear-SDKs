/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x042699A0
	 * 		Name   -> Function TaleNotes.TaleNote.OnTextCanvasUpdate
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCanvas*                                     InCanvas                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InWidth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHeight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATaleNote::OnTextCanvasUpdate(class UCanvas* InCanvas, int32_t InWidth, int32_t InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaleNotes.TaleNote.OnTextCanvasUpdate");
		
		ATaleNote_OnTextCanvasUpdate_Params params {};
		params.InCanvas = InCanvas;
		params.InWidth = InWidth;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaleNote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaleNote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaleNotes.TaleNote");
		return ptr;
	}

}


