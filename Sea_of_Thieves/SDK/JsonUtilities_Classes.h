#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJsonUtilitiesBlueprintHelperLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, class FString* OutJsonString);
		bool STATIC_JsonObjectStringToUStruct(const class FString& InJsonString, const struct FGenericStruct& Struct);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
