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
	 * DynamicClass MapImageLookupFunctions.MapImageLookupFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMapImageLookupFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetMapThumbnail(const class FString& bpp__MapName__pf__const, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__NewParam__pf);
		void STATIC_GetGamemodeDiagram(const class FString& bpp__Gamemode__pf__const, class UObject* bpp____WorldContext__pf, class UTexture2D** bpp__Texture__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
