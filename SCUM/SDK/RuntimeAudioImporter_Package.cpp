/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlaybackTime                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UImportedSoundWave::RewindPlaybackTime(float PlaybackTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime");
		
		UImportedSoundWave_RewindPlaybackTime_Params params {};
		params.PlaybackTime = PlaybackTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory
	 * 		Flags  -> ()
	 */
	void UImportedSoundWave::ReleaseMemory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory");
		
		UImportedSoundWave_ReleaseMemory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished
	 * 		Flags  -> ()
	 */
	bool UImportedSoundWave::IsPlaybackFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished");
		
		UImportedSoundWave_IsPlaybackFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime
	 * 		Flags  -> ()
	 */
	float UImportedSoundWave::GetPlaybackTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime");
		
		UImportedSoundWave_GetPlaybackTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage
	 * 		Flags  -> ()
	 */
	float UImportedSoundWave::GetPlaybackPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage");
		
		UImportedSoundWave_GetPlaybackPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.GetDurationConst
	 * 		Flags  -> ()
	 */
	float UImportedSoundWave::GetDurationConst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.GetDurationConst");
		
		UImportedSoundWave_GetDurationConst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.ImportedSoundWave.GetDuration
	 * 		Flags  -> ()
	 */
	float UImportedSoundWave::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.ImportedSoundWave.GetDuration");
		
		UImportedSoundWave_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImportedSoundWave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImportedSoundWave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAudioImporter.ImportedSoundWave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreImportedSoundAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreImportedSoundAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAudioImporter.PreImportedSoundAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor
	 * 		Flags  -> ()
	 */
	class URuntimeAudioCompressor* URuntimeAudioCompressor::CreateRuntimeAudioCompressor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor");
		
		URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImportedSoundWave*                          ImportedSoundWaveRef                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCompressedSoundWaveInfo                    CompressedSoundWaveInfo                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFillCompressedBuffer                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFillPCMBuffer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFillRAWWaveBuffer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioCompressor::CompressSoundWave(class UImportedSoundWave* ImportedSoundWaveRef, const struct FCompressedSoundWaveInfo& CompressedSoundWaveInfo, unsigned char Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave");
		
		URuntimeAudioCompressor_CompressSoundWave_Params params {};
		params.ImportedSoundWaveRef = ImportedSoundWaveRef;
		params.CompressedSoundWaveInfo = CompressedSoundWaveInfo;
		params.Quality = Quality;
		params.bFillCompressedBuffer = bFillCompressedBuffer;
		params.bFillPCMBuffer = bFillPCMBuffer;
		params.bFillRAWWaveBuffer = bFillRAWWaveBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URuntimeAudioCompressor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeAudioCompressor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAudioImporter.RuntimeAudioCompressor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePathFrom                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERAWAudioFormat                                    FormatFrom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePathTo                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERAWAudioFormat                                    FormatTo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeAudioImporterLibrary::TranscodeRAWDataFromFile(const class FString& FilePathFrom, ERAWAudioFormat FormatFrom, const class FString& FilePathTo, ERAWAudioFormat FormatTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile");
		
		URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Params params {};
		params.FilePathFrom = FilePathFrom;
		params.FormatFrom = FormatFrom;
		params.FilePathTo = FilePathTo;
		params.FormatTo = FormatTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              RAWData_From                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ERAWAudioFormat                                    FormatFrom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              RAWData_To                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ERAWAudioFormat                                    FormatTo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioImporterLibrary::TranscodeRAWDataFromBuffer(TArray<unsigned char> RAWData_From, ERAWAudioFormat FormatFrom, TArray<unsigned char>* RAWData_To, ERAWAudioFormat FormatTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer");
		
		URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Params params {};
		params.RAWData_From = RAWData_From;
		params.FormatFrom = FormatFrom;
		params.FormatTo = FormatTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RAWData_To != nullptr)
			*RAWData_To = params.RAWData_To;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERAWAudioFormat                                    Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SampleRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumOfChannels                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioImporterLibrary::ImportAudioFromRAWFile(const class FString& FilePath, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile");
		
		URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Params params {};
		params.FilePath = FilePath;
		params.Format = Format;
		params.SampleRate = SampleRate;
		params.NumOfChannels = NumOfChannels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              RAWBuffer                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ERAWAudioFormat                                    Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SampleRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumOfChannels                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioImporterLibrary::ImportAudioFromRAWBuffer(TArray<unsigned char> RAWBuffer, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer");
		
		URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Params params {};
		params.RAWBuffer = RAWBuffer;
		params.Format = Format;
		params.SampleRate = SampleRate;
		params.NumOfChannels = NumOfChannels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPreImportedSoundAsset*                      PreImportedSoundAssetRef                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioImporterLibrary::ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAssetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound");
		
		URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Params params {};
		params.PreImportedSoundAssetRef = PreImportedSoundAssetRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioFormat                                       Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioImporterLibrary::ImportAudioFromFile(const class FString& FilePath, EAudioFormat Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile");
		
		URuntimeAudioImporterLibrary_ImportAudioFromFile_Params params {};
		params.FilePath = FilePath;
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              AudioData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAudioFormat                                       Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAudioImporterLibrary::ImportAudioFromBuffer(TArray<unsigned char> AudioData, EAudioFormat Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer");
		
		URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Params params {};
		params.AudioData = AudioData;
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              AudioData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EAudioFormat URuntimeAudioImporterLibrary::GetAudioFormatAdvanced(TArray<unsigned char> AudioData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced");
		
		URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Params params {};
		params.AudioData = AudioData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EAudioFormat URuntimeAudioImporterLibrary::GetAudioFormat(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat");
		
		URuntimeAudioImporterLibrary_GetAudioFormat_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImportedSoundWave*                          ImporterSoundWave                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SavePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioFormat                                       AudioFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeAudioImporterLibrary::ExportSoundWaveToFile(class UImportedSoundWave* ImporterSoundWave, const class FString& SavePath, EAudioFormat AudioFormat, unsigned char Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile");
		
		URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Params params {};
		params.ImporterSoundWave = ImporterSoundWave;
		params.SavePath = SavePath;
		params.AudioFormat = AudioFormat;
		params.Quality = Quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImportedSoundWave*                          ImporterSoundWave                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              AudioData                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAudioFormat                                       AudioFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeAudioImporterLibrary::ExportSoundWaveToBuffer(class UImportedSoundWave* ImporterSoundWave, TArray<unsigned char>* AudioData, EAudioFormat AudioFormat, unsigned char Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer");
		
		URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Params params {};
		params.ImporterSoundWave = ImporterSoundWave;
		params.AudioFormat = AudioFormat;
		params.Quality = Quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioData != nullptr)
			*AudioData = params.AudioData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter
	 * 		Flags  -> ()
	 */
	class URuntimeAudioImporterLibrary* URuntimeAudioImporterLibrary::CreateRuntimeAudioImporter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter");
		
		URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URuntimeAudioImporterLibrary::ConvertSecondsToString(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString");
		
		URuntimeAudioImporterLibrary_ConvertSecondsToString_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URuntimeAudioImporterLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeAudioImporterLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAudioImporter.RuntimeAudioImporterLibrary");
		return ptr;
	}

}


