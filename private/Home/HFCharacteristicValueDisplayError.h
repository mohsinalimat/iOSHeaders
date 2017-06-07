//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueDisplayError : NSObject
{
    unsigned long long _category;
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSError *_underlyingError;
}

+ (id)errorWithUnderlyingError:(id)arg1 contextProvider:(id)arg2;
@property(copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;

@end
