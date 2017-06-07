//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidate.h>

@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate
{
    _Bool _emojiCandidate;
    _Bool _extensionCandidate;
    _Bool _isForShortcutConversion;
    _Bool _isAutocorrection;
    _Bool _OTAWordListCandidate;
    NSString *_candidate;
    NSString *_input;
    NSNumber *_mecabraCandidatePointerValue;
    unsigned long long _deleteCount;
    long long _cursorMovement;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
- (long long)cursorMovement;
- (_Bool)isOTAWordListCandidate;
- (_Bool)isAutocorrection;
- (_Bool)isForShortcutConversion;
- (_Bool)isExtensionCandidate;
- (_Bool)isEmojiCandidate;
@property(retain, nonatomic) NSNumber *mecabraCandidatePointerValue; // @synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue;
- (id)input;
- (id)candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)deleteCount;
- (_Bool)isFullwidthCandidate;
- (id)label;
- (void)dealloc;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(_Bool)arg4 isEmoji:(_Bool)arg5 isShortcut:(_Bool)arg6 isAutocorrection:(_Bool)arg7 isFromOTAWordList:(_Bool)arg8 deleteCount:(unsigned long long)arg9 cursorMovement:(long long)arg10;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(_Bool)arg4 isEmoji:(_Bool)arg5 isShortcut:(_Bool)arg6 isAutocorrection:(_Bool)arg7 isFromOTAWordList:(_Bool)arg8 deleteCount:(unsigned long long)arg9;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(_Bool)arg4 isEmoji:(_Bool)arg5 isShortcut:(_Bool)arg6 isAutocorrection:(_Bool)arg7 isFromOTAWordList:(_Bool)arg8;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(_Bool)arg4;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;

@end

