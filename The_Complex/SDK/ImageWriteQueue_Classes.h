#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class ImageWriteQueue.ImageWriteBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
