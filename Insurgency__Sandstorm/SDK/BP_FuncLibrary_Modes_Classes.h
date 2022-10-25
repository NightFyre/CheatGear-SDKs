#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_FuncLibrary_Modes_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetGamemodeTextFromName(const class FName& bpp__Name__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__Output__pf);
		void STATIC_GetGamemodeLocalizedName(const class FName& bpp__GameMode__pf, class UObject* bpp____WorldContext__pf, class FText* bpp__Name__pf);
		void STATIC_GetGamemodeClassFromName(const class FName& bpp__Name__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bFound__pf, class UClass** bpp__Class__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
