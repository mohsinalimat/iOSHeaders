//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _MPUViewControllerCreationInformation : NSObject
{
    NSDictionary *_attributes;
    CDUnknownBlockType _defaultQueryCreationHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType defaultQueryCreationHandler; // @synthesize defaultQueryCreationHandler=_defaultQueryCreationHandler;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1 defaultQueryCreationHandler:(CDUnknownBlockType)arg2;

@end

