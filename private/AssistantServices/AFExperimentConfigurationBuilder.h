//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFExperimentConfiguration, AFExperimentGroup, NSArray, NSString;

@interface AFExperimentConfigurationBuilder : NSObject
{
    AFExperimentConfiguration *_baseObject;
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    struct _builderFlags {
        unsigned int isDirty:1;
        unsigned int hasType:1;
        unsigned int hasIdentifier:1;
        unsigned int hasVersion:1;
        unsigned int hasControlGroup:1;
        unsigned int hasExperimentGroups:1;
        unsigned int hasSalt:1;
    } _builderFlags;
}

- (void).cxx_destruct;
- (id)build;
- (id)setSalt:(id)arg1;
- (id)setExperimentGroups:(id)arg1;
- (id)setControlGroup:(id)arg1;
- (id)setVersion:(id)arg1;
- (id)setIdentifier:(id)arg1;
- (id)setType:(long long)arg1;
- (id)initWithBaseObject:(id)arg1;
- (id)init;

@end

