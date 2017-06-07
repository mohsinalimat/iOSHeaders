//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSString, NSURL, TTSSpeechChannel;
@protocol TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject <NSSecureCoding>
{
    id <TTSSpeechRequestDelegate> _delegate;
    TTSSpeechChannel *_speechChannel;
    _Bool _maintainsInput;
    _Bool _audioSessionIDIsValid;
    _Bool _useVoiceBooster;
    _Bool _useMonarchStyleRate;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    double _latency;
    double _dispatchTime;
    double _handledTime;
    NSArray *_channels;
    void *_clientContext;
    NSURL *_resourceListURL;
    NSURL *_resourceSearchPathURL;
    NSString *_originalString;
    NSMutableArray *_originalWordRanges;
    NSMutableArray *_processedWordRanges;
    NSMutableArray *_replacedWords;
    long long _wordRangeCallbacksDispatched;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long wordRangeCallbacksDispatched; // @synthesize wordRangeCallbacksDispatched=_wordRangeCallbacksDispatched;
@property(retain, nonatomic) NSMutableArray *replacedWords; // @synthesize replacedWords=_replacedWords;
@property(retain, nonatomic) NSMutableArray *processedWordRanges; // @synthesize processedWordRanges=_processedWordRanges;
@property(retain, nonatomic) NSMutableArray *originalWordRanges; // @synthesize originalWordRanges=_originalWordRanges;
@property(retain, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(copy, nonatomic) NSURL *resourceSearchPathURL; // @synthesize resourceSearchPathURL=_resourceSearchPathURL;
@property(copy, nonatomic) NSURL *resourceListURL; // @synthesize resourceListURL=_resourceListURL;
@property(nonatomic) void *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(nonatomic) _Bool useMonarchStyleRate; // @synthesize useMonarchStyleRate=_useMonarchStyleRate;
@property(nonatomic) _Bool useVoiceBooster; // @synthesize useVoiceBooster=_useVoiceBooster;
@property(nonatomic) double handledTime; // @synthesize handledTime=_handledTime;
@property(nonatomic) double dispatchTime; // @synthesize dispatchTime=_dispatchTime;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TTSSpeechChannel *speechChannel; // @synthesize speechChannel=_speechChannel;
- (void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2 forService:(id)arg3;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechChannel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)vocalizerGender;
- (long long)vocalizerFootprint;

@end

