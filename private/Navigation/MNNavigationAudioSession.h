//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MNNavigationAudioSessionDelegate;

@interface MNNavigationAudioSession : NSObject
{
    unsigned long long _sessionType;
    NSString *_language;
    _Bool _speechEnabled;
    _Bool _muteSpeechOverride;
    id <MNNavigationAudioSessionDelegate> _delegate;
    unsigned long long _appContext;
}

+ (id)sessionOfType:(unsigned long long)arg1 language:(id)arg2;
@property(nonatomic) _Bool muteSpeechOverride; // @synthesize muteSpeechOverride=_muteSpeechOverride;
@property(nonatomic) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(nonatomic) unsigned long long appContext; // @synthesize appContext=_appContext;
@property(nonatomic) __weak id <MNNavigationAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
- (void).cxx_destruct;
- (_Bool)_headphonesAreInUse;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)endAnnounce;
- (void)prepareToAnnounce;
- (void)endSession;
- (void)beginSession;
- (void)clearAllAnnouncements;
- (void)stop;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2;
- (_Bool)_beepIfNecessaryWithShortPromptType:(unsigned long long)arg1;
- (void)speakInitialAnnouncement:(id)arg1;
- (_Bool)_isVoiceGuidanceEnabled;

@end

