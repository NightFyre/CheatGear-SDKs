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
	 * Class GbxPerfAnalytics.GbxTelemetryBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxTelemetryBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FK2TelemetryValues STATIC_SetNamedTelemetryVector(struct FK2TelemetryValues* StatArray, const class FString& Key, const struct FVector& Value, ESetTelemetryValue Opt);
		struct FK2TelemetryValues STATIC_SetNamedTelemetryString(struct FK2TelemetryValues* StatArray, const class FString& Key, const class FString& Value, ESetTelemetryValue Opt);
		struct FK2TelemetryValues STATIC_SetNamedTelemetryRotator(struct FK2TelemetryValues* StatArray, const class FString& Key, const struct FRotator& Value, ESetTelemetryValue Opt);
		struct FK2TelemetryValues STATIC_SetNamedTelemetryInt(struct FK2TelemetryValues* StatArray, const class FString& Key, int32_t Value, ESetTelemetryValue Opt);
		struct FK2TelemetryValues STATIC_SetNamedTelemetryFloat(struct FK2TelemetryValues* StatArray, const class FString& Key, float Value, ESetTelemetryValue Opt);
		struct FK2TelemetryValues STATIC_SetNamedTelemetryByte(struct FK2TelemetryValues* StatArray, const class FString& Key, unsigned char Value, ESetTelemetryValue Opt);
		struct FK2TelemetryValues STATIC_SetNamedTelemetryBool(struct FK2TelemetryValues* StatArray, const class FString& Key, bool Value, ESetTelemetryValue Opt);
		struct FK2EventRef STATIC_MakeTelemetryEventRef(const class FString& EventName);
		bool STATIC_IsValid(const struct FK2EventRef& EventRef);
		bool STATIC_EmitTelemetryValues(const class FString& EventContext, const struct FK2TelemetryValues& Values, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient);
		bool STATIC_EmitTelemetryEvent(const struct FK2EventRef& Event, const class FString& EventContext, class UObject* EventContextObject, class UObject* EventInstigatorObject, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient);
		struct FK2EventRef STATIC_DefineTelemetryEventRef(const class FString& EventName, const class FString& TableDesc);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
