//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>
#import <TextInput/TIUserDictionaryEntry-Protocol.h>

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry>
{
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

+ (id)valueWithEntry:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (id)shortcutForSorting;
- (_Bool)matchesEntry:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

