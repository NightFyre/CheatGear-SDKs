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
	 * DynamicClass BP_GameStatIcons.BP_GameStatIcons_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_GameStatIcons_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetPlayerClassNameIcon(const class FName& bpp__ClassKey__pf, class UObject* bpp____WorldContext__pf, bool* bpp__bFound__pf, class FText* bpp__Text__pf, class UTexture2D** bpp__Icon__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
