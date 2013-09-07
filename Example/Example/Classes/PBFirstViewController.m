#import "PBFirstViewController.h"
#import "PizzaBtn.h"

@interface PBFirstViewController ()

@end

@implementation PBFirstViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    // Change button orientations example
    if(UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
    {
        [PizzaBtn setAvailableOrientations:PizzaBtnInterfaceOrientationMaskkAllButUpsideDown];
    }
    else
    {
        [PizzaBtn setAvailableOrientations:PizzaBtnInterfaceOrientationMaskAll];
    }
}

// For iOS < 6.0 rotations
- (BOOL) shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation {
    if(UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
        if(toInterfaceOrientation == UIInterfaceOrientationPortraitUpsideDown)
            return NO;
    }
    return YES;
}

@end
