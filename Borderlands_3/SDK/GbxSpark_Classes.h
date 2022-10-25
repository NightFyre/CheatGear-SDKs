#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class GbxSpark.EnumerateTelemetryCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UEnumerateTelemetryCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxSpark.SparkBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USparkBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PostLeviathanEventWithAttribute(class APlayerController* PlayerController, const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue);
		void STATIC_PostLeviathanEvent(class APlayerController* PlayerController, const class FString& EventName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
