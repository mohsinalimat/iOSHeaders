//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

@interface NMSObfuscatableDescriptionItem : NSObject
{
    _Bool _obfuscated;
    NSString *_format;
    id <NSObject> _value;
}

@property(nonatomic) _Bool obfuscated; // @synthesize obfuscated=_obfuscated;
@property(retain, nonatomic) id <NSObject> value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(_Bool)arg3;

@end

