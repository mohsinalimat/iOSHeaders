//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFDataStore : NSObject
{
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (id)imageDataForKey:(id)arg1;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithEntries:(id)arg1;

@end

