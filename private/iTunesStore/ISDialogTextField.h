//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSString;

@interface ISDialogTextField : NSObject <SSXPCCoding>
{
    long long _keyboardType;
    _Bool _secure;
    NSString *_title;
    NSString *_value;
}

+ (id)textFieldWithTitle:(id)arg1;
@property(retain) NSString *value; // @synthesize value=_value;
@property(retain) NSString *title; // @synthesize title=_title;
@property(getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

