//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField
{
    NSMutableCharacterSet *_numericTrimmingSet;
    unsigned long long _maxNumbersAllowed;
    _Bool _allowsNewlineAcceptance;
    _Bool _autoAcceptWhenMaxNumbersMet;
}

+ (_Bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
@property(nonatomic) _Bool autoAcceptWhenMaxNumbersMet; // @synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet;
@property(nonatomic) unsigned long long maxNumbersAllowed; // @synthesize maxNumbersAllowed=_maxNumbersAllowed;
@property(nonatomic) _Bool allowsNewlineAcceptance; // @synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance;
- (void).cxx_destruct;
- (_Bool)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(id)arg1;
- (void)_appendString:(id)arg1;
- (void)_deleteLastCharacter;
- (_Bool)shouldInsertPasscodeText:(id)arg1;
- (_Bool)resignFirstResponder;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;

@end

