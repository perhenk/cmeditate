
typedef struct MediSession {
  int id;
  char date[11];  
  int minutes;
} MediSession;


MediSession createMediSession(int minutes);
