//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject
{
    void *_impl;
}

- (void)dealloc;
@property(nonatomic) float rolloffFactor;
@property(nonatomic) float referenceDistance;
@property(nonatomic) float maximumDistance;
@property(nonatomic) long long distanceAttenuationModel;
-     // Error parsing type: @24@0:8^{AVAudioEnvironmentNodeImpl=^^?^{AVAudioEngineImpl}@{vector<bool, std::__1::allocator<bool> >=^QQ{__compressed_pair<unsigned long, std::__1::allocator<unsigned long> >=Q}}B^{AVAudioMixingImpl}^{map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >}Bqd{atomic<double>=Ad}i{unique_ptr<AUInterfaceBaseV3, std::__1::default_delete<AUInterfaceBaseV3> >={__compressed_pair<AUInterfaceBaseV3 *, std::__1::default_delete<AUInterfaceBaseV3> >=^{AUInterfaceBaseV3}}}f{AVAudio3DPoint=fff}{AVAudio3DVectorOrientation={AVAudio3DPoint=fff}{AVAudio3DPoint=fff}}{AVAudio3DAngularOrientation=fff}{map<AVAudio3DMixingImpl *, unsigned int, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned int> > >={__tree<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true>, std::__1::allocator<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true> >=Q}}}@Ifff@@Bffff}16, name: initWithEnvironment:
- (id)init;

@end

