//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject
{
    _Bool __wasFoundInLastUpdate;
    unsigned long long _identifier;
    NSSet *_components;
}

@property _Bool _wasFoundInLastUpdate; // @synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate;
@property(retain) NSSet *components; // @synthesize components=_components;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

