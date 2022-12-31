#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


string convertToSmall(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            res += s[i];
        } 
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            res += s[i] - 'A' + 'a';
        }
    }
    return res;
}


void naiveStringMatch(string text, string pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();
    int i, j;

    if(patternLength > textLength) {
        cout << "Pattern is longer than text" << endl;
        return;
    }

    text = convertToSmall(text);
    pattern = convertToSmall(pattern);

    for (i = 0; i < textLength - patternLength + 1; i ++) {
        for (j = 0; j < patternLength; j ++) {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == patternLength){
            cout << "Pattern found at index " << i << endl;
        }
    }
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    string text, pattern;

    cout << "Enter the string : ";
    cin >> text;

    cout << "Enter the pattern : ";
    cin >> pattern;

    cout << "\n\nNaive String Matching : " << endl;
    naiveStringMatch(text, pattern);
    cout << "\n";
}




















// %{ 
// /*	Assignment 3	 */
// 	int eduWords = 0, otherWords = 0, stopWords = 0;
	
// %}

// %option caseless
// word [a-zA-Z][^ \t\n]+
// eol \n
// notWord [^ a-zA-Z]
// %%
// [\t ]+			;
// university|educational|institution|college|collegiate|academy|undergraduate|campus|academic|student|seminary|high|faculty|bachelor's|degree|academia|academe|harvard|secondary|school|academic|degree|dartmouth|stanford|ucla|professor|teacher|lecturer|teach|tutor|scholastic|varsity|upperclassman|graduate|schooler|system|teaching|tertiary|scholarship|collegiate|university|graduation|sophomore|elementary|prep|alumni|secondary|vocational|polytechnic|junior|classes|courses|tuition|humanities|semester|freshman|graduate|school|dartmouth|college|associate's|degree|ivy|league|latin|italy|oceania|collegium|law|victoria|melbourne|body|complex|queensland|tasmania|academical|lyceum|schoolfellow|academician|collegian|scholasticism|extramural|schoolteacher|sorbonne|graduating|classroom|schoolboy|multiversity|academian|graduated|colleges|neoplatonism|schoolmate|theology|alumna|curriculum|yale|tafe|scholar|oxford|cambridge|attended|schools|preceptor|quebec|schoolie|mit|minischool|interschool|schoolish|antischool|schooliosis|afterschool|schoolgoer|subschool|deschool|students|conservatory|schoolwise|higher|and|training|awards|council|enrolled|coeducation|unschooled|graduates|chalkboard|schoolwide|ontario|princeton|foundationer|schoolless|deconstructivism|educational|amherst|alberta|berkeley|bachelor|taught|schoolbook|schoolery|schoollike|intramural|trinity|schoolroom|prague|liberal|arts|schoolteaching|schoolhouse|postgraduate|collegial|cyberschool|georgetown|cornell|universities|studenty|schoolgoing|extemp|michigan|schooly|icu|instructor|pennsylvania|degree|arts|coaching|massachusetts|secondary|blackboard|teachers|teaches|superschool|educated|campuses|penn|rochester|connecticut|docent|maryland|lesson|nursing|high|rutgers|doctorate|wesleyan|attending|ohio|paraeducator|alumnus|columbia|virginia|syracuse|singapore|dean|institution|learning|pedagogical|studying|draft|morehouse|associate|library|assistant|exeter|at|science|studied|institutional|crammer|tutorial|tulane|shoal|baylor|carolina|medical|educator|johns|institute|vocational|united|states|cegep|job|aristotle|south|asia|homework|schoolkid|indoctrination|further|british|english|american|english|educate|ancient|rome|mumbai|state|school|melbourne|grammar|school|postsecondary|school|cranbrook|school,|sydney|moo|u|schoolchild|the|king's|school,|parramatta|feeder|school|secondary|schools|alumnus|association|gymnatorium|lecture|theatre|building|complex|training|college|business|college|melbourne|high|school|chalkface|northern|territory|e-learning|new|south|wales|schoolwear|ph.d.|australian|capital|territory|legacy|student|high|education|upper|canada|college|prep|school|korea|university|junior|school|unteach|vancouver|college|middle|school|religious|school|misteach|learn|place|separate|school|elementary|school|private|school|dance|school|special|school|public|school|st|john's|college|technical|school|schoolfriend|primary|school|school|system|sri|lanka|madrassah|pointillism|lake|poet|sinhala|language|student|teacher|ratio|alma|mat|bus|student|lecture|hall|royal|college|colombo|class|room|home|school|classroom|chair|semester|hour|dean's|list|s.|thomas'|college|trinity|college,|kandy|rule|school|studentship|st.|joseph's|college,|colombo|university|of|the|philippines|st.|anthony's|college,|kandy|day|school|summer|school|madhya|maha|vidyalayas|grade|school|electoral|college|normal|school|grammar|school|teach|student|college|of|arms|school|uniform|georgia|tech|vocational|school|text|book|academic|year|college|of|cardinals|night|school|board|school|open|university|royal|college|of|nursing|san|beda|college|study|hall|royal|college|of|physicians|at|school|american|college|of|physicians|vestibule|school|macau|american|college|of|surgeons|teach|person|royal|australian|college|of|general|practitioners|comprehensive|school|fac|brat|college|student|academic|certificate|fastener|binder|party|school|nursery|school|off|campus|college|education|in|quebec|education|in|quebec|special|education|junior|high|school|quiz|bowl|university|college|frat|house|royal|military|college|of|canada|royal|military|college|saint-jean|on|campus|technological|university|royal|roads|military|college|school|age|stick|eraser|federated|school|theater|hall|grade|inflation|portugal|university|of|trinity|college|law|student|university|of|toronto|rational|think|fetac|memorial|university|of|newfoundland|educations|highschool|matriculate|coursework|diploma|postgraduate|schoolwork|sociology|intercollegiate|grad|collegians|basketball|careers|dorm|wsu|uni|internships|baccalaureate|rotc|football|deans|athletics|professors|madrasah|recruiters|coeducational|fraternities|sorority|criminology|utep|classmates|tutoring|eligibility|legree|madrasa|parents|redshirt|st.|john's,|newfoundland|and|labrador|edexcel|corner|brook|coimbra|show|and|tell|sir|wilfred|grenfell|college|exam|table|nscad|university|frat|boy|sadie|hawkins|dance|ocad|university|emily|carr|university|of|art|and|design|canadian|football|league|school|student|finish|school|canadian|college|draft|blackboard|eraser|town|and|gown|college|football|cis|football|santiago|college|charm|school|military|academy|england|saint|george's|college,|santiago|wales|the|chinese|university|of|hong|kong|st.|john's|college,|university|of|hong|kong|belize|c.|m.|s.|college|kottayam|bob|jones|university|in|school|malta|art|school|presidency|college,|kolkata|medical|student|norway|imprs|l|institute|of|technology|main|build|serampore|college|brunei|scottish|church|college,|calcutta|sydenham|college|republic|of|ireland|belvedere|college|gcses|gonzaga|college|undergrad|postgrad|colligate|prelaw|shool|gradate|precalculus|assistantship|gpas|csus|enigmatology|cashs|underclassman|scool|middler|coeds|copyboy|yalie|professoriate|smu|advisee|bmus|st|michael's|college,|dublin|india|ancient|university|university|of|dublin|paris|elizabeth|i|of|england|lycée|trinity|college,|dublin|national|university|of|ireland|queen's|university|of|ireland|catholic|university|of|ireland|royal|university|of|ireland|queen's|university|belfast|dublin|city|university|university|of|limerick|national|institute|for|higher|education|institutes|of|technology|in|ireland|dublin|business|school|church|of|ireland|college|of|education|higher|national|diploma|council|for|higher|education|in|israel|bachelor|of|education|chan|sui|ki|perpetual|help|college|vocation|union|gcse|indiana|georgia|igcse|yuet|wah|college|university|of|new|zealand|university|of|otago|university|of|canterbury|royal|australasian|college|of|surgeons|royal|australasian|college|of|physicians|rangitoto|college|university|of|santo|tomas|ateneo|de|manila|university|de|la|salle|university|central|colleges|of|the|philippines|colegio|de|san|juan|de|letran|fr.|saturnino|urios|university|basic|education|colégio|militar|alma|mater|rhodes|scholarship|entrance|exam|phi|beta|kappa|midterm|exam|extracurricular|activity|ivy|leaguer|gear|up|dorm|room|boarding|school|john|iii|of|portugal|institute|of|technical|education|ite|college|east|ite|college|central|ite|college|west|sri|lanka|law|college|sixth|form|college|college|of|further|education|northern|ireland|the|caribbean|southern|africa|gce|advanced|level|united|kingdom|business|and|technology|education|council|international|baccalaureate|diploma|sixth|form|higher|education|university|of|edinburgh|university|of|salford|university|of|birmingham|university|of|leicester|university|of|the|arts|london|university|of|wales|university|of|london|university|of|lancaster|university|of|york|university|of|kent|university|of|st|andrews|university|of|durham|university|of|reading|university|of|oxford|community|college|princeton|university|college|of|the|university|of|chicago|harvard|college|harvard|university|columbia|college|of|columbia|university|columbia|university|university|of|california,|berkeley|duke|university|trinity|college|of|arts|and|sciences|liberal|arts|colleges|in|the|united|states|rice|university|yale|university|residential|college|university|of|michigan|university|of|california,|san|diego|university|of|california,|santa|cruz|royal|charter|public|university|morrill|land-grant|colleges|act|boston|college|american|civil|war|boston|university|general|certificate|of|education|graduate|education|international|baccalaureate|the|college|of|william|&|mary|massachusetts|institute|technology|united|states|military|academy|cooper|union|new|england|conservatory|juilliard|vincennes|university|education|university|academy|college|teacher|classroom|grammar|school|student|primary|school|secondary|educate|vocational|school|seminary|schoolhouse|kindergarten|educational|institution|conservatory|day|school|public|school|shoal|elementary|school|private|school|middle|school|graduate|school|curriculum|academic|gymnasium|schoolteacher|lyceum|deconstructivism|schoolroom|institution|crammer|religious|school|school|system|dance|school|technical|grade|faculty|study|hall|night|scholasticism|pointillism|educational|campus|teach|cultivate|civilize|schooling|train|undergraduate|harvard|schooltime|reading|scholastic|junior|schooler|nursery|school|arts|varsity|elementary|students|teaching|comprehensive|school|graduation|classes|alma|mater|high|school|prep|vocational|campuses|secondary|education|girls|tuition|pupils|gurukul|europe|preschool|civilise|learn|ucla|schoolfellow|extramural|period|eight|secession|conservatoire|refine|lycee|polish|tech|staff|fish|swim|edifice|down|building|body|academical|collegiate|schoolboy|country|professor|neoplatonism|academe|academician|stanford|academia|schoolmate|collegian|yeshiva|afterschool|law|coeducation|schools|schoolie|chalkboard|preceptor|homeschooling|schoolish|upperclassman|sorbonne|minischool|schoolgoer|schoolwise|antischool|interschool|deschool|subschool|graduate|unschooled|schoolery|schoolless|schoolteaching|lesson|child|schoolbook|schoolwide|schooliosis|schoollike|leisure|fine-tune|sezession|sophisticate|home-school|instructor|lecturer|cyberschool|scholar|sophomore|attended|pedagogical|graduating|schoolgoing|intramural|school|day|paraeducator|colleges|schooly|graduated|blackboard|academian|alumna|tutor|multiversity|hawza|foundationer|high|homework|taught|secondary|teachers|studenty|schoolkid|soldier|mit|enrolled|yale|educator|islam|boys|extemp|schoolchild|instructional|mosque|writing|pennsylvania|superschool|oxford|educationist|berkeley|where|didactic|grade|aristotle|at|graduates|attending|tutorial|nursing|schoolgirl|courses|caliph|cambridge|michigan|community|maryland|new|indoctrination|universities|hall|georgetown|worked|queens|classmate|youth|pedagogue|medical|princeton|teachable|learning|massachusetts|bachelor|in|brooklyn|scholarship|teaches|virginia|ohio|trinity|home|ottomans|center|degree|training|studying|established|learning|space|mathematics|practice|bursa|city|bronx|gymnatorium|library|studied|york|learning|environment|preparatory|working|junior|cornell|assistant|edirne|serves|illinois|for|columbia|addition|educated|served|unteach|misteach|chalkface|compulsory|education|higher|education|foreteach|university|college|schoolwear|latin|madrassa|learn|place|prep|school|student|teacher|ratio|classroom|chair|special|job|home|class|room|lecture|hall|nizamiyya|madrassah|teach|student|lake|poet|bus|student|feeder|school|schoolfriend|postsecondary|school|school|teacher|sunday|school|secretarial|school|animal|group|time|period|ashcan|school|sabbath|school|period|of|time|historical|school|art|nouveau|lake|poets|finishing|school|veterinary|school|correspondence|school|dancing|school|direct-grant|school|driving|school|training|school|riding|school|grad|school|language|school|nursing|school|school|of|nursing|flying|school|text|book|spoonfeed|legacy|student|rule|school|high|education|lecture|theatre|alma|mat|normal|school|alumnus|association|board|school|junior|college|academic|year|science|school|uniform|alternative|school|külliye|teach|person|at|school|christian|school|moo|u|vestibule|school|summer|school|special|education|corporate|training|georgia|tech|dean's|list|military|education|and|training|korea|university|business|school|fac|brat|educational|technology|open|university|denmark-norway|school|organizational|models|college|student|greek|language|fastener|binder|junior|high|school|music|ofsted|classical|antiquity|school|age|charm|school|ancient|greece|grade|inflation|stick|eraser|off|campus|blackboard|eraser|semester|hour|law|student|ancient|rome|pre-school|quiz|bowl|school|student|education|in|ancient|rome|in|school|humanities|finish|school|show|and|tell|byzantine|empire|on|campus|australia|sadie|hawkins|dance|find|in|school|india|exam|table|geography|self|educate|p`akistan|district|highschool|homeroom|busing|classmates|interscholastic|parents|scholl|electives|headmaster|tutoring|cafeteria|grades|kids|truancy|principals|graders|semester|athletics|proms|algebra|yearbook|math|educators|schoolwork|dropout|latchkey|madrasa|superintendents|gym|textbooks|playground|valedictorian|truants|matriculation|montessori|headmistress|schoolyard|administrators|phys|frat|house|rational|think|bangladesh|rag|school|technological|university|art|party|nizam|al-mulk|military|academy|science|room|kenya|estyn|tanzania|history|health|care|hindu|madrasah|languages|middle|ages|early|modern|shool|scool|kindergarteners|kindergartners|kindergartner|prekindergarten|edhs|kindergartener|cashs|lunchroom|cafetorium|schoolchildren|precalculus|pretests|paraprofessional|eduction|jhs|grps|playschool|cheder|intersession|one-room|school|kid|hack|realschule|school|bus|united|kingdom|boy|infant|school|toddler|girl|secondary|modern|gesamtschule|her|majesty's|inspectorate|of|education|hauptschule|pedagogy|bullying|state|workshop|laboratory|gang|vandalism|cleric|literacy|monastery|state|schools|independent|school|north|american|english|commonwealth|of|nations|new|zealand|horace|mann|preparatory|extracurricular|activity|sri|lanka|south|africa|self-esteem|central|board|for|secondary|education|primary|education|tertiary|education|eastern|europe|world|war|ii|vocational|education|north|america|senior|high|school|charter|schools|state|education|agency|united|states|religious|denomination|critical|pedagogy|cram|school|teacher|education|work-related|stress|school|net|namibia|bomb|threat|door|numbering|closed-circuit|television|industrial|arts|toronto|district|school|board	{ eduWords ++; }
// as|are|but|why|i|who|through|or|him|wouldn|did|whom|above|needn|hers|when|his|here|isn|ma|now|how|once|weren|that|that'll|wasn't|having|your|to|you'd|wouldn't|which|off|on|d|same|t|again|hadn|both|o|haven't|most|our|because|up|until|than|too|being|at|doing|we|mightn't|she|a|m|about|been|theirs|wasn|their|mightn|has|ain|nor|shan't|he|these|aren|such|haven|then|each|all|herself|aren't|you'll|have|the|out|over|shouldn't|ll|had|few|doesn't|any|mustn|you|its|from|before|couldn't|for|doesn|while|in|so|not|if|what|s|isn't|down|you're|hasn't|during|weren't|shan|between|it|couldn|them|this|further|should|an|can|be|don|ve|it's|you've|yours|didn|himself|where|shouldn|with|hasn|by|re|needn't|me|and|should've|mustn't|hadn't|there|just|y|more|against|will|ourselves|itself|they|below|my|only|do|very|myself|ours|her|other|own|yourself|does|those|won|didn't|themselves|yourselves|no|she's|of|won't|is|some|was|am|under|into|after|were|don't	{ stopWords++; }
// {notWord}		;
// {word}			{ otherWords ++; }

// %%

// int main(){
// 	FILE *fptr;
// 	fptr = fopen("input.txt","r");
// 	yyin = fptr;	
// 	yylex();
	
// 	printf("Number of educational words = %d \n", eduWords);
// 	printf("Number of stop words = %d \n", stopWords);
// 	printf("Number of other words = %d \n\n", otherWords);

// 	float threshold = 0.4, prediction = (float)eduWords / (eduWords + otherWords);
// 	printf("Threshold = %f\n", threshold);
//   	printf("Prediction = %f\n\n\n", prediction);
  	
//   	if( prediction > threshold ){
//   		printf("This is an educational document.\n");
// 	}
// 	else if(prediction > threshold - 0.1){
// 		printf("This document is partially educational");
// 	}
// 	else{
//   		printf("This is not an educational document.\n");
// 	}
  
//   return 0;
// }
 
// int yywrap(){
//   return 1;
// }