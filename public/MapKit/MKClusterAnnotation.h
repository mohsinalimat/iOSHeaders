//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <MKAnnotation>
{
    NSArray *_memberAnnotations;
    NSString *_clusteringIdentifier;
    struct CLLocationCoordinate2D __coordinate;
    NSString *__title;
    NSString *__subtitle;
    struct {
        unsigned int hasCoordinate:1;
        unsigned int hasMutableCoordinate:1;
        unsigned int hasTitle:1;
        unsigned int hasSubtitle:1;
    } _flags;
}

@property(copy, nonatomic) NSString *clusteringIdentifier; // @synthesize clusteringIdentifier=_clusteringIdentifier;
@property(readonly, nonatomic) NSArray *memberAnnotations; // @synthesize memberAnnotations=_memberAnnotations;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (struct CLLocationCoordinate2D)_averageCoordinate;
- (_Bool)_isMKClusterAnnotation;
@property(readonly) unsigned long long hash;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithMemberAnnotations:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=__coordinate;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=__subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=__title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

