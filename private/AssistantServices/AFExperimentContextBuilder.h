//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFExperimentContext, NSDictionary;

@interface AFExperimentContextBuilder : NSObject
{
    AFExperimentContext *_baseObject;
    NSDictionary *_experimentsByConfigurationIdentifier;
    struct _builderFlags {
        unsigned int isDirty:1;
        unsigned int hasExperimentsByConfigurationIdentifier:1;
    } _builderFlags;
}

- (void).cxx_destruct;
- (id)build;
- (id)setExperimentsByConfigurationIdentifier:(id)arg1;
- (id)initWithBaseObject:(id)arg1;
- (id)init;

@end

