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
	 * 		RVA    -> 0x05000ED0
	 * 		Name   -> Function Tagline_PTFO.Tagline_PTFO_C.BlueprintOnCheckRoundEndAward
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSGameState*                               bpp__InGameState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__LastWinningTeam__pf__const                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_PTFO_C::BlueprintOnCheckRoundEndAward(class AINSGameState* bpp__InGameState__pf, unsigned char bpp__LastWinningTeam__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_PTFO.Tagline_PTFO_C.BlueprintOnCheckRoundEndAward");
		
		UTagline_PTFO_C_BlueprintOnCheckRoundEndAward_Params params {};
		params.bpp__InGameState__pf = bpp__InGameState__pf;
		params.bpp__LastWinningTeam__pf__const = bpp__LastWinningTeam__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTagline_PTFO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_PTFO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_PTFO.Tagline_PTFO_C");
		return ptr;
	}

}


